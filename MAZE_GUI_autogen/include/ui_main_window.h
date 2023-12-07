/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "clickable_label.h"

QT_BEGIN_NAMESPACE

class Ui_main_window
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *place_stop_button;
    QPushButton *place_start_button;
    QPushButton *bounding_polygon_button;
    QPushButton *solve_button;
    QPushButton *capture_button;
    clickable_label *image_label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *main_window)
    {
        if (main_window->objectName().isEmpty())
            main_window->setObjectName(QString::fromUtf8("main_window"));
        main_window->resize(523, 582);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(main_window->sizePolicy().hasHeightForWidth());
        main_window->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(main_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        place_stop_button = new QPushButton(centralwidget);
        place_stop_button->setObjectName(QString::fromUtf8("place_stop_button"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(place_stop_button->sizePolicy().hasHeightForWidth());
        place_stop_button->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(place_stop_button, 3, 6, 1, 1);

        place_start_button = new QPushButton(centralwidget);
        place_start_button->setObjectName(QString::fromUtf8("place_start_button"));
        sizePolicy1.setHeightForWidth(place_start_button->sizePolicy().hasHeightForWidth());
        place_start_button->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(place_start_button, 2, 6, 1, 1);

        bounding_polygon_button = new QPushButton(centralwidget);
        bounding_polygon_button->setObjectName(QString::fromUtf8("bounding_polygon_button"));
        sizePolicy1.setHeightForWidth(bounding_polygon_button->sizePolicy().hasHeightForWidth());
        bounding_polygon_button->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(bounding_polygon_button, 4, 6, 1, 1);

        solve_button = new QPushButton(centralwidget);
        solve_button->setObjectName(QString::fromUtf8("solve_button"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(solve_button->sizePolicy().hasHeightForWidth());
        solve_button->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(solve_button, 6, 6, 1, 1);

        capture_button = new QPushButton(centralwidget);
        capture_button->setObjectName(QString::fromUtf8("capture_button"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(capture_button->sizePolicy().hasHeightForWidth());
        capture_button->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(capture_button, 0, 6, 1, 1);

        image_label = new clickable_label(centralwidget);
        image_label->setObjectName(QString::fromUtf8("image_label"));
        sizePolicy.setHeightForWidth(image_label->sizePolicy().hasHeightForWidth());
        image_label->setSizePolicy(sizePolicy);
        image_label->setMinimumSize(QSize(400, 520));
        image_label->setSizeIncrement(QSize(0, 0));
        image_label->setFrameShape(QFrame::Box);
        image_label->setFrameShadow(QFrame::Plain);
        image_label->setLineWidth(2);

        gridLayout->addWidget(image_label, 0, 3, 7, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 6, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 6, 1, 1);

        main_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(main_window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 523, 22));
        main_window->setMenuBar(menubar);
        statusbar = new QStatusBar(main_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        main_window->setStatusBar(statusbar);

        retranslateUi(main_window);

        QMetaObject::connectSlotsByName(main_window);
    } // setupUi

    void retranslateUi(QMainWindow *main_window)
    {
        main_window->setWindowTitle(QCoreApplication::translate("main_window", "main_window", nullptr));
        place_stop_button->setText(QCoreApplication::translate("main_window", "Place Stop", nullptr));
        place_start_button->setText(QCoreApplication::translate("main_window", "Place Start", nullptr));
        bounding_polygon_button->setText(QCoreApplication::translate("main_window", "Draw Bounds", nullptr));
        solve_button->setText(QCoreApplication::translate("main_window", "Solve", nullptr));
        capture_button->setText(QCoreApplication::translate("main_window", "Capture", nullptr));
        image_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class main_window: public Ui_main_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
