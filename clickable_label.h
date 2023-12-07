#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H

#include <QLabel>
#include <QWidget>
#include <Qt>

struct click_info{
    int x;
    int y;
    Qt::MouseButton button;
};

class clickable_label : public QLabel {
    Q_OBJECT

public:
    explicit clickable_label(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    ~clickable_label();

signals:
    void clicked(click_info);

protected:
    void mousePressEvent(QMouseEvent* event);

};

#endif // CLICKABLELABEL_H
