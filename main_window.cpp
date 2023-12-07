#include "main_window.h"
#include "./ui_main_window.h"

#include <QDebug>
#include <unistd.h>

//TODO implement this
cv::Mat capture_image(){
    //std::string image_path = cv::samples::findFile("/home/vogel/Downloads/starry_night.jpg");
    //cv::Mat img = imread(image_path, cv::IMREAD_COLOR);
    //return img;

    // Open the first webcam plugged into the system
    cv::VideoCapture camera(2);
    if (!camera.isOpened()) {

    }

    usleep(1000000);
    // Capture an image
    cv::Mat frame;
    camera >> frame;
    if (frame.empty()) {

    }

    return frame;
}

//TODO implement this
std::vector<std::pair<int, int>> solve_maze(cv::Mat const& maze, std::pair<int, int> start, std::pair<int, int> stop, std::vector<std::pair<int, int>> const& bounding_polygon){

    std::vector<std::pair<int, int>> ret;
    for(int i = 0; i < 100; i++){
        ret.emplace_back(i,i);
    }
    return ret;

    //return std::vector<std::pair<int, int>>();
}

int app_state::check_bounding_polygon(){
    return bounding_polygon.size() > 2;
}

int app_state::check_start_placed(){
    return start_location.first >= 0;
}

int app_state::check_stop_placed(){
    return stop_location.first >= 0;
}

void app_state::image_reflect_state(){

}

void main_window::press_display_label(click_info info){
    if(!state.captured_image){return;}

    int scaled_x = static_cast<int>(static_cast<double>(info.x)/ui->image_label->width()*state.image.cols);
    int scaled_y = static_cast<int>(static_cast<double>(info.y)/ui->image_label->height()*state.image.rows);

    if(state.place_mode == place_mode_enum::start){
        state.start_location = std::make_pair(scaled_x, scaled_y);
    }
    else if(state.place_mode == place_mode_enum::stop){
        state.stop_location = std::make_pair(scaled_x, scaled_y);
    }
    else{
        if(info.button == Qt::MouseButton::LeftButton){
            state.bounding_polygon.push_back(std::make_pair(scaled_x, scaled_y));
        }
        else if(info.button == Qt::MouseButton::RightButton){
            if(state.bounding_polygon.size() > 0){
                state.bounding_polygon.pop_back();
            }
        }
    }
    reflect_state();
}

void main_window::press_capture_button(){

    //capture image
    state.image = std::move(capture_image());

    //update state
    state.captured_image = 1;
    state.place_mode = place_mode_enum::start;
    state.solved_maze = 0;

    //upadate display to reflect state
    reflect_state();
}

void main_window::press_solve_button(){

    //check if state is valid solve
    if(state.check_bounding_polygon() && state.check_start_placed() && state.check_stop_placed()){

        //solve state
        state.solution = solve_maze(state.image, state.start_location, state.stop_location, state.bounding_polygon);

        //update state
        if(state.solution.size() > 0){
            state.solved_maze = 1;
        }

        reflect_state();
    }

}

void main_window::press_place_start_button(){
    state.place_mode = place_mode_enum::start;
}

void main_window::press_place_stop_button(){
    state.place_mode = place_mode_enum::stop;
}

void main_window::press_bounding_polygon_button(){
    state.place_mode = place_mode_enum::bounding;
}

void main_window::reflect_state(){

    if(state.solved_maze){

        //copy orignal image
        state.modified_image = state.image.clone();

        //draw path image and display it
        for(auto point: state.solution){
            state.modified_image.at<cv::Vec3b>(point.first, point.second) = cv::Vec3b(255,0,0);
        }

        //display modified image
        QPixmap p = QPixmap::fromImage(QImage(state.modified_image.data, state.modified_image.cols, state.modified_image.rows, state.modified_image.step, QImage::Format_RGB888));
        ui->image_label->setPixmap(p.scaled(ui->image_label->width(),ui->image_label->height()));

    }
    else if(state.captured_image){

        //copy orignal image
        state.modified_image = state.image.clone();

        //draw start, stop, bounding box on modified image
        if(state.check_bounding_polygon()){
            for (int i = 0; i < state.bounding_polygon.size(); i ++) {
                auto cp1 = state.bounding_polygon[i];
                auto cp2 = state.bounding_polygon[(i+1)%state.bounding_polygon.size()];
                cv::Point p1(cp1.first, cp1.second);
                cv::Point p2(cp2.first, cp2.second);
                cv::line(state.modified_image, p1, p2, cv::Scalar(0,0,255), 3);
            }
        }
        if(state.check_start_placed()){
            cv::circle(state.modified_image, cv::Point(state.start_location.first, state.start_location.second), 5, cv::Scalar(0,255,0), 5);
        }
        if(state.check_stop_placed()){
            cv::circle(state.modified_image, cv::Point(state.stop_location.first, state.stop_location.second), 5, cv::Scalar(255,0,0), 5);
        }

        //display modified image
        QPixmap p = QPixmap::fromImage(QImage(state.modified_image.data, state.modified_image.cols, state.modified_image.rows, state.modified_image.step, QImage::Format_RGB888));
        ui->image_label->setPixmap(p.scaled(ui->image_label->width(),ui->image_label->height()));
    }
    else{

    }

}

void main_window::resizeEvent(QResizeEvent* event)
{
   QMainWindow::resizeEvent(event);
   reflect_state();
}

main_window::main_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::main_window)
{
    ui->setupUi(this);

    connect(ui->image_label, &clickable_label::clicked, this, &main_window::press_display_label);
    connect(ui->capture_button, &QPushButton::clicked, this, &main_window::press_capture_button);
    connect(ui->place_start_button, &QPushButton::clicked, this, &main_window::press_place_start_button);
    connect(ui->place_stop_button, &QPushButton::clicked, this, &main_window::press_place_stop_button);
    connect(ui->bounding_polygon_button, &QPushButton::clicked, this, &main_window::press_bounding_polygon_button);
    connect(ui->solve_button, &QPushButton::clicked, this, &main_window::press_solve_button);

}

main_window::~main_window()
{
    delete ui;
}

