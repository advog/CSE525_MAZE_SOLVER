#include "clickable_label.h"
#include <QMouseEvent>
#include <QtDebug>

clickable_label::clickable_label(QWidget* parent, Qt::WindowFlags f): QLabel(parent){}
clickable_label::~clickable_label(){}

void clickable_label::mousePressEvent(QMouseEvent* event){
    emit clicked(click_info{event->pos().x(),event->pos().y(), event->button()});
}
