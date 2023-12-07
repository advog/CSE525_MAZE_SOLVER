#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include "clickable_label.h"

QT_BEGIN_NAMESPACE
namespace Ui { class main_window; }
QT_END_NAMESPACE

enum class place_mode_enum{
    start,
    stop,
    bounding
};

class app_state{
public:

    char captured_image;
    cv::Mat image;
    cv::Mat modified_image;

    place_mode_enum place_mode;
    std::pair<int, int> start_location;
    std::pair<int, int> stop_location;
    std::vector<std::pair<int, int>> bounding_polygon;

    char solved_maze;
    std::vector<std::pair<int, int>> solution;


    int check_bounding_polygon();
    int check_start_placed();
    int check_stop_placed();
    void image_reflect_state();

    app_state(){
        captured_image = 0;
        place_mode = place_mode_enum::start;
        solved_maze = 0;
        start_location = std::make_pair(-1, -1);
        stop_location = std::make_pair(-1, -1);
    }

};


class main_window : public QMainWindow
{
    Q_OBJECT

public:
    main_window(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent* event);
    ~main_window();

public slots:
    void press_display_label(click_info);
    void press_capture_button();
    void press_solve_button();
    void press_place_start_button();
    void press_place_stop_button();
    void press_bounding_polygon_button();

private:
    Ui::main_window *ui;
    app_state state;
    void reflect_state();
};

#endif // MAIN_WINDOW_H
