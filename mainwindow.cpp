#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <qstring.h>
#include <stdio.h>

float TIMECOUNTER = 2.0;
float timeCounter = TIMECOUNTER;
int isPressed = 0; // button hop le duoc danh so tu 1 den 18
int isButton = 0; // button hop le duoc danh so tu 1 den 18
float gaze_x = 0.0;
float gaze_y = 0.0;

QString button_hover = "QPushButton{ \
                            Font: 40pt;\
                            background-color:rgb(230, 247, 255); \
                            border: 1px solid rgb(0, 0, 255) \
                        }";
QString button_default = "QPushButton{\
                            Font: 40pt;\
                        }";

QString button_isPressed = "QPushButton{ \
                            Font: 40pt;\
                            background-color: rgb(174, 229, 255); \
                            border: 1px solid rgb(0, 0, 255) \
                        }";

void setInitParameters() {
    timeCounter = TIMECOUNTER;
    isPressed = 0;
    isButton = 0;
}

void gaze_point_callback(tobii_gaze_point_t const* gaze_point, void* user_data) {
    if (gaze_point->validity == TOBII_VALIDITY_VALID) {

        // init gaze_point
        if (gaze_x == 0.0 && gaze_y == 0) {
            gaze_x = gaze_point->position_xy[0];
            gaze_y = gaze_point->position_xy[1];
            setInitParameters();
        }
        else {
            gaze_x = gaze_point->position_xy[0];
            gaze_y = gaze_point->position_xy[1];

            // dong 1
            if (gaze_y > 0 && gaze_y < 0.25) {
                // label
                if (gaze_x > 0 && gaze_x < 0.4) {
                    setInitParameters();
                }
                // button_17
                else if (gaze_x > 0.4 && gaze_x < 0.6) {
                    if (isButton == 17) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 17;
                        timeCounter = TIMECOUNTER;
                    }
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_16
                else if (gaze_x > 0.6 && gaze_x < 0.8) {
                    if (isButton == 16) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 16;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button _18
                else if (gaze_x > 0.8 && gaze_x < 1) {
                    if (isButton == 18) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 18;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
            }

            // dong 2
            else if (gaze_y > 0.25 && gaze_y < 0.5) {
                // button_1
                if (gaze_x > 0 && gaze_x < 0.2) {
                    if (isButton == 1) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 1;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_2
                else if (gaze_x > 0.2 && gaze_x < 0.4) {
                    if (isButton == 2) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 2;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_3
                else if (gaze_x > 0.4 && gaze_x < 0.6) {
                    if (isButton == 3) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 3;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_4
                else if (gaze_x > 0.6 && gaze_x < 0.8) {
                    if (isButton == 4) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 4;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_5
                else if (gaze_x > 0.8 && gaze_x < 1.0) {
                    if (isButton == 5) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 5;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
            }

            // dong 3
            else if (gaze_y > 0.5 && gaze_y < 0.75) {
                // button_6
                if (gaze_x > 0 && gaze_x < 0.2) {
                    if (isButton == 6) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 6;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_7
                else if (gaze_x > 0.2 && gaze_x < 0.4) {
                    if (isButton == 7) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 7;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_8
                else if (gaze_x > 0.4 && gaze_x < 0.6) {
                    if (isButton == 8) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 8;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_9
                else if (gaze_x > 0.6 && gaze_x < 0.8) {
                    if (isButton == 9) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 9;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_10
                else if (gaze_x > 0.8 && gaze_x < 1.0) {
                    if (isButton == 10) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 10;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
            }

            // dong 4
            else if (gaze_y > 0.75 && gaze_y < 1.0) {
                // button_11
                if (gaze_x > 0 && gaze_x < 0.2) {
                    if (isButton == 11) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 11;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_12
                else if (gaze_x > 0.2 && gaze_x < 0.4) {
                    if (isButton == 12) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 12;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_13
                else if (gaze_x > 0.4 && gaze_x < 0.6) {
                    if (isButton == 13) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 13;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_14
                else if (gaze_x > 0.6 && gaze_x < 0.8) {
                    if (isButton == 14) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 14;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_15
                else if (gaze_x > 0.8 && gaze_x < 1.0) {
                    if (isButton == 15) {
                        timeCounter -= 0.01;
                    }
                    else {
                        isButton = 15;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
            }
        }
    }
    else {
        gaze_x = 0;
        gaze_y = 0;
    }
}

void cursor_position(float x, float y) {
    if (x >= 0 && x <= 1 && y >= 0 && y <= 1) {
        // init gaze_point
        if (gaze_x == 0.0 && gaze_y == 0) {
            gaze_x = x;
            gaze_y = y;
            setInitParameters();
        }
        else {
            gaze_x = x;
            gaze_y = y;

            // dong 1
            if (gaze_y > 0 && gaze_y < 0.25) {
                // label
                if (gaze_x > 0 && gaze_x < 0.4) {
                    setInitParameters();
                }
                // button_17
                else if (gaze_x > 0.4 && gaze_x < 0.6) {
                    if (isButton == 17) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 17;
                        timeCounter = TIMECOUNTER;
                    }
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_16
                else if (gaze_x > 0.6 && gaze_x < 0.8) {
                    if (isButton == 16) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 16;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button _18
                else if (gaze_x > 0.8 && gaze_x < 1) {
                    if (isButton == 18) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 18;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
            }

            // dong 2
            else if (gaze_y > 0.25 && gaze_y < 0.5) {
                // button_1
                if (gaze_x > 0 && gaze_x < 0.2) {
                    if (isButton == 1) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 1;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_2
                else if (gaze_x > 0.2 && gaze_x < 0.4) {
                    if (isButton == 2) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 2;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_3
                else if (gaze_x > 0.4 && gaze_x < 0.6) {
                    if (isButton == 3) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 3;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_4
                else if (gaze_x > 0.6 && gaze_x < 0.8) {
                    if (isButton == 4) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 4;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_5
                else if (gaze_x > 0.8 && gaze_x < 1.0) {
                    if (isButton == 5) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 5;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
            }

            // dong 3
            else if (gaze_y > 0.5 && gaze_y < 0.75) {
                // button_6
                if (gaze_x > 0 && gaze_x < 0.2) {
                    if (isButton == 6) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 6;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_7
                else if (gaze_x > 0.2 && gaze_x < 0.4) {
                    if (isButton == 7) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 7;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_8
                else if (gaze_x > 0.4 && gaze_x < 0.6) {
                    if (isButton == 8) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 8;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_9
                else if (gaze_x > 0.6 && gaze_x < 0.8) {
                    if (isButton == 9) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 9;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_10
                else if (gaze_x > 0.8 && gaze_x < 1.0) {
                    if (isButton == 10) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 10;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
            }

            // dong 4
            else if (gaze_y > 0.75 && gaze_y < 1.0) {
                // button_11
                if (gaze_x > 0 && gaze_x < 0.2) {
                    if (isButton == 11) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 11;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_12
                else if (gaze_x > 0.2 && gaze_x < 0.4) {
                    if (isButton == 12) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 12;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_13
                else if (gaze_x > 0.4 && gaze_x < 0.6) {
                    if (isButton == 13) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 13;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_14
                else if (gaze_x > 0.6 && gaze_x < 0.8) {
                    if (isButton == 14) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 14;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
                // button_15
                else if (gaze_x > 0.8 && gaze_x < 1.0) {
                    if (isButton == 15) {
                        timeCounter -= 0.1;
                    }
                    else {
                        isButton = 15;
                        timeCounter = TIMECOUNTER;
                    }
                    // check counter
                    if (timeCounter <= 0) {
                        isPressed = 1;
                    }
                }
            }
        }
    }
    else {
        gaze_x = 0;
        gaze_y = 0;
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText(" ");
    ui->label->setStyleSheet("QLabel{Font: 40pt}");
    ui->pushButton->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_2->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_3->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_4->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_5->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_6->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_7->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_8->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_9->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_10->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_11->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_12->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_13->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_14->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_15->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_16->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_17->setStyleSheet("QPushButton{Font: 40pt}");
    ui->pushButton_18->setStyleSheet("QPushButton{Font: 40pt}");

    if (error == TOBII_ERROR_NO_ERROR) {
        error = tobii_gaze_point_subscribe(device, gaze_point_callback, 0);
        if (error != TOBII_ERROR_NO_ERROR) {
            qDebug() << tobii_error_message(error) << "\n";
        }
        timer = new QTimer(this);
        QObject::connect(timer, SIGNAL(timeout()), this, SLOT(update()));
        timer->start(100);
    }
    else {
        QMessageBox::information(this, "Device not found", "Bạn đang ở chế độ dùng chuột, để dùng thiết bị, vui lòng cắm thiết bị vào sau đó bật lại ứng dụng", QMessageBox::Ok);
        timer = new QTimer(this);
        QObject::connect(timer, SIGNAL(timeout()), this, SLOT(update_cursor_tracking()));
        timer->start(100);
    } 
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_cursor_tracking() {
    ui->label->setFixedWidth((int)(0.3925 * this->size().width()));
    
    QPoint point = QCursor::pos();
    float x = (float)this->mapFromGlobal(point).x() / this->size().width();
    float y = (float)this->mapFromGlobal(point).y() / this->size().height();
    cursor_position(x, y);
    
    //ui->label->setText(QString::number(timeCounter));
    if (isPressed == 1) {
        switch (isButton)
        {
        case 1:
            ui->pushButton->pressed();
            break;
        case 2:
            ui->pushButton_2->pressed();
            break;
        case 3:
            ui->pushButton_3->pressed();
            break;
        case 4:
            ui->pushButton_4->pressed();
            break;
        case 5:
            ui->pushButton_5->pressed();
            break;
        case 6:
            ui->pushButton_6->pressed();
            break;
        case 7:
            ui->pushButton_7->pressed();
            break;
        case 8:
            ui->pushButton_8->pressed();
            break;
        case 9:
            ui->pushButton_9->pressed();
            break;
        case 10:
            ui->pushButton_10->pressed();
            break;
        case 11:
            ui->pushButton_11->pressed();
            break;
        case 12:
            ui->pushButton_12->pressed();
            break;
        case 13:
            ui->pushButton_13->pressed();
            break;
        case 14:
            ui->pushButton_14->pressed();
            break;
        case 15:
            ui->pushButton_15->pressed();
            break;
        case 16:
            ui->pushButton_16->pressed();
            break;
        case 17:
            ui->pushButton_17->pressed();
            break;
        case 18:
            ui->pushButton_18->pressed();
            break;
        default:
            break;
        }
        setInitParameters();
    }

}

void MainWindow::update() {
    ui->label->setFixedWidth((int)(0.3925 * this->size().width()));
    
    // Optionally block this thread until data is available. Especially useful if running in a separate thread.
    error = tobii_wait_for_callbacks(1, &device);
    assert(error == TOBII_ERROR_NO_ERROR || error == TOBII_ERROR_TIMED_OUT);

    // Process callbacks on this thread if data is available
    error = tobii_device_process_callbacks(device);
    assert(error == TOBII_ERROR_NO_ERROR);

    //QString text = "isButton: " + QString::number(isButton) + "\n" + "isPressed: " + QString::number(isPressed);
    //ui->label->setText(text);

    // check nut nao duoc nhin
    switch (isButton)
    {
    case 0:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
    case 1:
        ui->pushButton->setStyleSheet(button_hover);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 2:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_hover);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 3:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_hover);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 4:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_hover);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 5:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_hover);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 6:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_hover);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 7:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_hover);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 8:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_hover);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 9:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_hover);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 10:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_hover);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 11:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_hover);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 12:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_hover);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 13:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_hover);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 14:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_hover);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 15:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_hover);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 16:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_hover);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 17:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_hover);
        ui->pushButton_18->setStyleSheet(button_default);
        break;
    case 18:
        ui->pushButton->setStyleSheet(button_default);
        ui->pushButton_2->setStyleSheet(button_default);
        ui->pushButton_3->setStyleSheet(button_default);
        ui->pushButton_4->setStyleSheet(button_default);
        ui->pushButton_5->setStyleSheet(button_default);
        ui->pushButton_6->setStyleSheet(button_default);
        ui->pushButton_7->setStyleSheet(button_default);
        ui->pushButton_8->setStyleSheet(button_default);
        ui->pushButton_9->setStyleSheet(button_default);
        ui->pushButton_10->setStyleSheet(button_default);
        ui->pushButton_11->setStyleSheet(button_default);
        ui->pushButton_12->setStyleSheet(button_default);
        ui->pushButton_13->setStyleSheet(button_default);
        ui->pushButton_14->setStyleSheet(button_default);
        ui->pushButton_15->setStyleSheet(button_default);
        ui->pushButton_16->setStyleSheet(button_default);
        ui->pushButton_17->setStyleSheet(button_default);
        ui->pushButton_18->setStyleSheet(button_hover);
        break;
    default:
        break;
    }

    // check nut nao duoc nhan
    if (isPressed == 1) {
        switch (isButton)
        {
        case 1:
            if (ui->pushButton->text() != "") {
                ui->pushButton->pressed();
            }
            break;
        case 2:
            if (ui->pushButton_2->text() != "") {
                ui->pushButton_2->pressed();
            }
            break;
        case 3:
            if (ui->pushButton_3->text() != "") {
                ui->pushButton_3->pressed();
            }
            break;
        case 4:
            if (ui->pushButton_4->text() != "") {
                ui->pushButton_4->pressed();
            }
            break;
        case 5:
            if (ui->pushButton_5->text() != "") {
                ui->pushButton_5->pressed();
            }
            break;
        case 6:
            if (ui->pushButton_6->text() != "") {
                ui->pushButton_6->pressed();
            }
            break;
        case 7:
            if (ui->pushButton_7->text() != "") {
                ui->pushButton_7->pressed();
            }
            break;
        case 8:
            if (ui->pushButton_8->text() != "") {
                ui->pushButton_8->pressed();
            }
            break;
        case 9:
            if (ui->pushButton_9->text() != "") {
                ui->pushButton_9->pressed();
            }
            break;
        case 10:
            if (ui->pushButton_10->text() != "") {
                ui->pushButton_10->pressed();
            }
            break;
        case 11:
            if (ui->pushButton_11->text() != "") {
                ui->pushButton_11->pressed();
            }
            break;
        case 12:
            if (ui->pushButton_12->text() != "") {
                ui->pushButton_12->pressed();
            }
            break;
        case 13:
            if (ui->pushButton_13->text() != "") {
                ui->pushButton_13->pressed();
            }
            break;
        case 14:
            if (ui->pushButton_14->text() != "") {
                ui->pushButton_14->pressed();
            }
            break;
        case 15:
            if (ui->pushButton_15->text() != "") {
                ui->pushButton_15->pressed();
            }
            break;
        case 16:
            if (ui->pushButton_16->text() != "") {
                ui->pushButton_16->pressed();
            }
            break;
        case 17:
            if (ui->pushButton_17->text() != "") {
                ui->pushButton_17->pressed();
            }
            break;
        case 18:
            if (ui->pushButton_18->text() != "") {
                ui->pushButton_18->pressed();
            }
            break;
        default:
            break;
        }
        setInitParameters();
    }
}

void MainWindow::addTo_Stack() {
    QVector<QString> vector;
    // label
    vector.push_back(comPress + " " + currentPress);
    // button 1 - 9 9- 15
    vector.push_back(ui->pushButton->text());
    vector.push_back(ui->pushButton_2->text());
    vector.push_back(ui->pushButton_3->text());
    vector.push_back(ui->pushButton_4->text());
    vector.push_back(ui->pushButton_5->text());
    vector.push_back(ui->pushButton_6->text());
    vector.push_back(ui->pushButton_7->text());
    vector.push_back(ui->pushButton_8->text());
    vector.push_back(ui->pushButton_9->text());
    vector.push_back(ui->pushButton_11->text());
    vector.push_back(ui->pushButton_12->text());
    vector.push_back(ui->pushButton_13->text());
    vector.push_back(ui->pushButton_14->text());
    vector.push_back(ui->pushButton_15->text());

    // add to stack
    stack.push(vector);
}

void MainWindow::on_pushButton_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        QString mystring = comPress + " " + currentPress;
        QString subString = mystring;
        /*if (mystring.size() > 15) {
            subString = mystring.mid(mystring.size() - 15, 15);

        }*/
        ui->label->setText(subString);
    }
    if (currentPress == "b") {
        ui->pushButton->setText("bu");
        ui->pushButton_2->setText("bư");
        ui->pushButton_3->setText("ba");
        ui->pushButton_4->setText("bă");
        ui->pushButton_5->setText("bâ");

        ui->pushButton_6->setText("bo");
        ui->pushButton_7->setText("bô");
        ui->pushButton_8->setText("bơ");
        ui->pushButton_9->setText("bi");

        ui->pushButton_11->setText("be");
        ui->pushButton_12->setText("bê");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("buô");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("bủ");
        ui->pushButton_12->setText("bú");
        ui->pushButton_13->setText("bù");
        ui->pushButton_14->setText("bụ");
        ui->pushButton_15->setText("bũ");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("búc");
        ui->pushButton_2->setText("bục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bưc") {

        ui->pushButton->setText("bức");
        ui->pushButton_2->setText("bực");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bưng") {

        ui->pushButton->setText("bửng");
        ui->pushButton_2->setText("bứng");
        ui->pushButton_3->setText("bừng");
        ui->pushButton_4->setText("bựng");
        ui->pushButton_5->setText("bững");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bươc") {

        ui->pushButton->setText("bước");
        ui->pushButton_2->setText("bược");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bương") {

        ui->pushButton->setText("bưởng");
        ui->pushButton_2->setText("bướng");
        ui->pushButton_3->setText("bường");
        ui->pushButton_4->setText("bượng");
        ui->pushButton_5->setText("bưỡng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bac") {

        ui->pushButton->setText("bach");
        ui->pushButton_2->setText("bác");
        ui->pushButton_3->setText("bạc");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bach") {

        ui->pushButton->setText("bách");
        ui->pushButton_2->setText("bạch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bang") {

        ui->pushButton->setText("bảng");
        ui->pushButton_2->setText("báng");
        ui->pushButton_3->setText("bàng");
        ui->pushButton_4->setText("bạng");
        ui->pushButton_5->setText("bãng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "băc") {

        ui->pushButton->setText("bắc");
        ui->pushButton_2->setText("bặc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "băng") {

        ui->pushButton->setText("bẳng");
        ui->pushButton_2->setText("bắng");
        ui->pushButton_3->setText("bằng");
        ui->pushButton_4->setText("bặng");
        ui->pushButton_5->setText("bẵng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bâc") {

        ui->pushButton->setText("bấc");
        ui->pushButton_2->setText("bậc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bâng") {

        ui->pushButton->setText("bẩng");
        ui->pushButton_2->setText("bấng");
        ui->pushButton_3->setText("bầng");
        ui->pushButton_4->setText("bậng");
        ui->pushButton_5->setText("bầng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "boc") {

        ui->pushButton->setText("bóc");
        ui->pushButton_2->setText("bọc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bong") {

        ui->pushButton->setText("bỏng");
        ui->pushButton_2->setText("bóng");
        ui->pushButton_3->setText("bòng");
        ui->pushButton_4->setText("bọng");
        ui->pushButton_5->setText("bõng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bôc") {

        ui->pushButton->setText("bốc");
        ui->pushButton_2->setText("bộc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bông") {

        ui->pushButton->setText("bổng");
        ui->pushButton_2->setText("bống");
        ui->pushButton_3->setText("bồng");
        ui->pushButton_4->setText("bộng");
        ui->pushButton_5->setText("bỗng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bơt") {

        ui->pushButton->setText("bớt");
        ui->pushButton_2->setText("bợt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bic") {

        ui->pushButton->setText("bich");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bich") {

        ui->pushButton->setText("bích");
        ui->pushButton_2->setText("bịch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "binh") {

        ui->pushButton->setText("bỉnh");
        ui->pushButton_2->setText("bính");
        ui->pushButton_3->setText("bình");
        ui->pushButton_4->setText("bịnh");
        ui->pushButton_5->setText("bĩnh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "biêc") {

        ui->pushButton->setText("biếc");
        ui->pushButton_2->setText("biệc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "biêng") {

        ui->pushButton->setText("biểng");
        ui->pushButton_2->setText("biếng");
        ui->pushButton_3->setText("biềng");
        ui->pushButton_4->setText("biệng");
        ui->pushButton_5->setText("biễng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bet") {

        ui->pushButton->setText("bét");
        ui->pushButton_2->setText("bẹt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "beng") {

        ui->pushButton->setText("bẻng");
        ui->pushButton_2->setText("béng");
        ui->pushButton_3->setText("bèng");
        ui->pushButton_4->setText("bẹng");
        ui->pushButton_5->setText("bẽng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bêc") {

        ui->pushButton->setText("bêch");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bêch") {

        ui->pushButton->setText("bếch");
        ui->pushButton_2->setText("bệch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bênh") {

        ui->pushButton->setText("bểnh");
        ui->pushButton_2->setText("bếnh");
        ui->pushButton_3->setText("bềnh");
        ui->pushButton_4->setText("bệnh");
        ui->pushButton_5->setText("bễnh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ch") {

        ui->pushButton->setText("chu");
        ui->pushButton_2->setText("chư");
        ui->pushButton_3->setText("cha");
        ui->pushButton_4->setText("chă");
        ui->pushButton_5->setText("châ");

        ui->pushButton_6->setText("cho");
        ui->pushButton_7->setText("chô");
        ui->pushButton_8->setText("chơ");
        ui->pushButton_9->setText("chi");

        ui->pushButton_11->setText("che");
        ui->pushButton_12->setText("chê");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chu") {

        ui->pushButton->setText("chuc");
        ui->pushButton_2->setText("chut");
        ui->pushButton_3->setText("chum");
        ui->pushButton_4->setText("chun");
        ui->pushButton_5->setText("chup");

        ui->pushButton_6->setText("chua");
        ui->pushButton_7->setText("chuâ");
        ui->pushButton_8->setText("chuy");
        ui->pushButton_9->setText("chuô");

        ui->pushButton_11->setText("chui");
        ui->pushButton_12->setText("chủ");
        ui->pushButton_13->setText("chú");
        ui->pushButton_14->setText("chù");
        ui->pushButton_15->setText("chụ");
    }
    else if (currentPress == "chuc") {

        ui->pushButton->setText("chúc");
        ui->pushButton_2->setText("chục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chung") {

        ui->pushButton->setText("chủng");
        ui->pushButton_2->setText("chúng");
        ui->pushButton_3->setText("chùng");
        ui->pushButton_4->setText("chụng");
        ui->pushButton_5->setText("chũng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chuân") {

        ui->pushButton->setText("chuẩn");
        ui->pushButton_2->setText("chuấn");
        ui->pushButton_3->setText("chuần");
        ui->pushButton_4->setText("chuận");
        ui->pushButton_5->setText("chuẫn");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chuyê") {

        ui->pushButton->setText("chuyên");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chuyên") {

        ui->pushButton->setText("chuyển");
        ui->pushButton_2->setText("chuyến");
        ui->pushButton_3->setText("chuyền");
        ui->pushButton_4->setText("chuyện");
        ui->pushButton_5->setText("chuyễn");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chuôc") {

        ui->pushButton->setText("chuốc");
        ui->pushButton_2->setText("chuộc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chuông") {

        ui->pushButton->setText("chuổng");
        ui->pushButton_2->setText("chuống");
        ui->pushButton_3->setText("chuồng");
        ui->pushButton_4->setText("chuộng");
        ui->pushButton_5->setText("chuỗng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chưc") {

        ui->pushButton->setText("chức");
        ui->pushButton_2->setText("chực");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chưng") {

        ui->pushButton->setText("chửng");
        ui->pushButton_2->setText("chứng");
        ui->pushButton_3->setText("chừng");
        ui->pushButton_4->setText("chựng");
        ui->pushButton_5->setText("chững");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chươc") {

        ui->pushButton->setText("chước");
        ui->pushButton_2->setText("chược");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chương") {

        ui->pushButton->setText("chưởng");
        ui->pushButton_2->setText("chướng");
        ui->pushButton_3->setText("chường");
        ui->pushButton_4->setText("chượng");
        ui->pushButton_5->setText("chưỡng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chac") {

        ui->pushButton->setText("chach");
        ui->pushButton_2->setText("chác");
        ui->pushButton_3->setText("chạc");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chach") {

        ui->pushButton->setText("chách");
        ui->pushButton_2->setText("chạch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chang") {

        ui->pushButton->setText("chảng");
        ui->pushButton_2->setText("cháng");
        ui->pushButton_3->setText("chàng");
        ui->pushButton_4->setText("chạng");
        ui->pushButton_5->setText("chãng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chăc") {

        ui->pushButton->setText("chắc");
        ui->pushButton_2->setText("chặc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chăng") {

        ui->pushButton->setText("chẳng");
        ui->pushButton_2->setText("chắng");
        ui->pushButton_3->setText("chằng");
        ui->pushButton_4->setText("chặng");
        ui->pushButton_5->setText("chẵng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chât") {

        ui->pushButton->setText("chất");
        ui->pushButton_2->setText("chật");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choc") {

        ui->pushButton->setText("chóc");
        ui->pushButton_2->setText("chọc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chong") {

        ui->pushButton->setText("chỏng");
        ui->pushButton_2->setText("chóng");
        ui->pushButton_3->setText("chòng");
        ui->pushButton_4->setText("chọng");
        ui->pushButton_5->setText("chõng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choac") {

        ui->pushButton->setText("choác");
        ui->pushButton_2->setText("choạc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choan") {

        ui->pushButton->setText("choang");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choang") {

        ui->pushButton->setText("choãng");
        ui->pushButton_2->setText("choáng");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choăt") {

        ui->pushButton->setText("choắt");
        ui->pushButton_2->setText("choặt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choet") {

        ui->pushButton->setText("choét");
        ui->pushButton_2->setText("choẹt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chôc") {

        ui->pushButton->setText("chốc");
        ui->pushButton_2->setText("chộc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chông") {

        ui->pushButton->setText("chổng");
        ui->pushButton_2->setText("chống");
        ui->pushButton_3->setText("chồng");
        ui->pushButton_4->setText("chộng");
        ui->pushButton_5->setText("chỗng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chớt") {

        ui->pushButton->setText("chớt");
        ui->pushButton_2->setText("chợt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chic") {

        ui->pushButton->setText("chich");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chich") {

        ui->pushButton->setText("chích");
        ui->pushButton_2->setText("chịch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chinh") {

        ui->pushButton->setText("chỉnh");
        ui->pushButton_2->setText("chính");
        ui->pushButton_3->setText("chình");
        ui->pushButton_4->setText("chịnh");
        ui->pushButton_5->setText("chĩnh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chăt") {

        ui->pushButton->setText("chắt");
        ui->pushButton_2->setText("chặt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chiêc") {

        ui->pushButton->setText("chiếc");
        ui->pushButton_2->setText("chiệc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chiêng") {

        ui->pushButton->setText("chiểng");
        ui->pushButton_2->setText("chiếng");
        ui->pushButton_3->setText("chiềng");
        ui->pushButton_4->setText("chiệng");
        ui->pushButton_5->setText("chiễng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chet") {

        ui->pushButton->setText("chét");
        ui->pushButton_2->setText("chẹt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cheng") {

        ui->pushButton->setText("chẻng");
        ui->pushButton_2->setText("chéng");
        ui->pushButton_3->setText("chèng");
        ui->pushButton_4->setText("chẹng");
        ui->pushButton_5->setText("chẽng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chêc") {

        ui->pushButton->setText("chêch");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chêch") {

        ui->pushButton->setText("chếch");
        ui->pushButton_2->setText("chệch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chênh") {

        ui->pushButton->setText("chểnh");
        ui->pushButton_2->setText("chếnh");
        ui->pushButton_3->setText("chềnh");
        ui->pushButton_4->setText("chệnh");
        ui->pushButton_5->setText("chễnh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cuc") {

        ui->pushButton->setText("cúc");
        ui->pushButton_2->setText("cục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cung") {

        ui->pushButton->setText("củng");
        ui->pushButton_2->setText("cúng");
        ui->pushButton_3->setText("cùng");
        ui->pushButton_4->setText("cụng");
        ui->pushButton_5->setText("cũng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cuôc") {

        ui->pushButton->setText("cuốc");
        ui->pushButton_2->setText("cuộc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cuông") {

        ui->pushButton->setText("cuổng");
        ui->pushButton_2->setText("cuống");
        ui->pushButton_3->setText("cuồng");
        ui->pushButton_4->setText("cuộng");
        ui->pushButton_5->setText("cuỗng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cưc") {

        ui->pushButton->setText("cức");
        ui->pushButton_2->setText("cực");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cưng") {

        ui->pushButton->setText("cửng");
        ui->pushButton_2->setText("cứng");
        ui->pushButton_3->setText("cừng");
        ui->pushButton_4->setText("cựng");
        ui->pushButton_5->setText("cững");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cước") {

        ui->pushButton->setText("cước");
        ui->pushButton_2->setText("cược");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cương") {

        ui->pushButton->setText("cưởng");
        ui->pushButton_2->setText("cướng");
        ui->pushButton_3->setText("cường");
        ui->pushButton_4->setText("cượng");
        ui->pushButton_5->setText("cưỡng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cac") {

        ui->pushButton->setText("canh");
        ui->pushButton_2->setText("các");
        ui->pushButton_3->setText("cạc");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cach") {

        ui->pushButton->setText("cách");
        ui->pushButton_2->setText("cạch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cang") {

        ui->pushButton->setText("cảng");
        ui->pushButton_2->setText("cáng");
        ui->pushButton_3->setText("càng");
        ui->pushButton_4->setText("cạng");
        ui->pushButton_5->setText("cãng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "căc") {

        ui->pushButton->setText("cắc");
        ui->pushButton_2->setText("cặc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "căng") {

        ui->pushButton->setText("cẳng");
        ui->pushButton_2->setText("cắng");
        ui->pushButton_3->setText("cằng");
        ui->pushButton_4->setText("cặng");
        ui->pushButton_5->setText("cẵng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "câc") {

        ui->pushButton->setText("cấc");
        ui->pushButton_2->setText("cậc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "câng") {

        ui->pushButton->setText("cẩng");
        ui->pushButton_2->setText("cấng");
        ui->pushButton_3->setText("cầng");
        ui->pushButton_4->setText("cậng");
        ui->pushButton_5->setText("cẫng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "coc") {

        ui->pushButton->setText("cóc");
        ui->pushButton_2->setText("cọc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cong") {

        ui->pushButton->setText("cỏng");
        ui->pushButton_2->setText("cóng");
        ui->pushButton_3->setText("còng");
        ui->pushButton_4->setText("cọng");
        ui->pushButton_5->setText("cõng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "côc") {

        ui->pushButton->setText("cốc");
        ui->pushButton_2->setText("cộc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "công") {

        ui->pushButton->setText("cổng");
        ui->pushButton_2->setText("cống");
        ui->pushButton_3->setText("cồng");
        ui->pushButton_4->setText("cộng");
        ui->pushButton_5->setText("cỗng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "du") {

        ui->pushButton->setText("duc");
        ui->pushButton_2->setText("dut");
        ui->pushButton_3->setText("dum");
        ui->pushButton_4->setText("dun");
        ui->pushButton_5->setText("dua");

        ui->pushButton_6->setText("duy");
        ui->pushButton_7->setText("duô");
        ui->pushButton_8->setText("dui");
        ui->pushButton_9->setText("duê");

        ui->pushButton_11->setText("dủ");
        ui->pushButton_12->setText("dú");
        ui->pushButton_13->setText("dù");
        ui->pushButton_14->setText("dụ");
        ui->pushButton_15->setText("dũ");
    }
    else if (currentPress == "duc") {

        ui->pushButton->setText("dúc");
        ui->pushButton_2->setText("dục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dung") {

        ui->pushButton->setText("dủng");
        ui->pushButton_2->setText("dúng");
        ui->pushButton_3->setText("dùng");
        ui->pushButton_4->setText("dụng");
        ui->pushButton_5->setText("dũng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "duyê") {

        ui->pushButton->setText("duyêt");
        ui->pushButton_2->setText("duyên");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "duyêt") {

        ui->pushButton->setText("duyết");
        ui->pushButton_2->setText("duyệt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "duôc") {

        ui->pushButton->setText("duốc");
        ui->pushButton_2->setText("duộc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dưc") {

        ui->pushButton->setText("dức");
        ui->pushButton_2->setText("dực");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dưng") {

        ui->pushButton->setText("dửng");
        ui->pushButton_2->setText("dứng");
        ui->pushButton_3->setText("dừng");
        ui->pushButton_4->setText("dựng");
        ui->pushButton_5->setText("dững");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dươc") {

        ui->pushButton->setText("dước");
        ui->pushButton_2->setText("dược");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dương") {

        ui->pushButton->setText("dưởng");
        ui->pushButton_2->setText("dướng");
        ui->pushButton_3->setText("dường");
        ui->pushButton_4->setText("dượng");
        ui->pushButton_5->setText("dưỡng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dac") {

        ui->pushButton->setText("dach");
        ui->pushButton_2->setText("dác");
        ui->pushButton_3->setText("dạc");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dach") {

        ui->pushButton->setText("dách");
        ui->pushButton_2->setText("dạch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dang") {

        ui->pushButton->setText("dảng");
        ui->pushButton_2->setText("dáng");
        ui->pushButton_3->setText("dàng");
        ui->pushButton_4->setText("dạng");
        ui->pushButton_5->setText("dãng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dăc") {

        ui->pushButton->setText("dắc");
        ui->pushButton_2->setText("dặc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dăng") {

        ui->pushButton->setText("dẳng");
        ui->pushButton_2->setText("dắng");
        ui->pushButton_3->setText("dằng");
        ui->pushButton_4->setText("dặng");
        ui->pushButton_5->setText("dẵng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dât") {

        ui->pushButton->setText("dất");
        ui->pushButton_2->setText("dật");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dâng") {

        ui->pushButton->setText("dẩng");
        ui->pushButton_2->setText("dấng");
        ui->pushButton_3->setText("dầng");
        ui->pushButton_4->setText("dậng");
        ui->pushButton_5->setText("dẫng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "doc") {

        ui->pushButton->setText("dóc");
        ui->pushButton_2->setText("dọc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dong") {

        ui->pushButton->setText("dỏng");
        ui->pushButton_2->setText("dóng");
        ui->pushButton_3->setText("dòng");
        ui->pushButton_4->setText("dọng");
        ui->pushButton_5->setText("dõng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dôc") {

        ui->pushButton->setText("dốc");
        ui->pushButton_2->setText("dộc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dông") {

        ui->pushButton->setText("dổng");
        ui->pushButton_2->setText("dống");
        ui->pushButton_3->setText("dồng");
        ui->pushButton_4->setText("dộng");
        ui->pushButton_5->setText("dỗng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dơn") {

        ui->pushButton->setText("dởn");
        ui->pushButton_2->setText("dớn");
        ui->pushButton_3->setText("dờn");
        ui->pushButton_4->setText("dợn");
        ui->pushButton_5->setText("dỡn");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dic") {

        ui->pushButton->setText("dich");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dich") {

        ui->pushButton->setText("dích");
        ui->pushButton_2->setText("dịch");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dinh") {

        ui->pushButton->setText("dỉnh");
        ui->pushButton_2->setText("dính");
        ui->pushButton_3->setText("dình");
        ui->pushButton_4->setText("dịnh");
        ui->pushButton_5->setText("dĩnh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "diêc") {

        ui->pushButton->setText("diếc");
        ui->pushButton_2->setText("diệc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "det") {

        ui->pushButton->setText("dét");
        ui->pushButton_2->setText("dẹt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dêt") {

        ui->pushButton->setText("dết");
        ui->pushButton_2->setText("dệt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dênh") {

        ui->pushButton->setText("dểnh");
        ui->pushButton_2->setText("dếnh");
        ui->pushButton_3->setText("dềnh");
        ui->pushButton_4->setText("dệnh");
        ui->pushButton_5->setText("dễnh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đu") {

        ui->pushButton->setText("đuc");
        ui->pushButton_2->setText("đut");
        ui->pushButton_3->setText("đum");
        ui->pushButton_4->setText("đun");
        ui->pushButton_5->setText("đup");

        ui->pushButton_6->setText("đua");
        ui->pushButton_7->setText("đuy");
        ui->pushButton_8->setText("đuô");
        ui->pushButton_9->setText("đui");

        ui->pushButton_11->setText("đuê");
        ui->pushButton_12->setText("đủ");
        ui->pushButton_13->setText("đú");
        ui->pushButton_14->setText("đù");
        ui->pushButton_15->setText("đụ");
    }
    else if (currentPress == "đuc") {

        ui->pushButton->setText("đúc");
        ui->pushButton_2->setText("đục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đung") {

        ui->pushButton->setText("đủng");
        ui->pushButton_2->setText("đúng");
        ui->pushButton_3->setText("đùng");
        ui->pushButton_4->setText("đụng");
        ui->pushButton_5->setText("đũng");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đuya") {

        ui->pushButton->setText("đuỷa");
        ui->pushButton_2->setText("đuýa");
        ui->pushButton_3->setText("đuỳa");
        ui->pushButton_4->setText("đuỵa");
        ui->pushButton_5->setText("đuỹa");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đuôc") {

        ui->pushButton->setText("đuốc");
        ui->pushButton_2->setText("đuộc");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
}

void MainWindow::on_pushButton_2_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_2->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if (currentPress == "but") {
        ui->pushButton->setText("bút");
        ui->pushButton_2->setText("bụt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("buô");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("bủ");
        ui->pushButton_12->setText("bú");
        ui->pushButton_13->setText("bù");
        ui->pushButton_14->setText("bụ");
        ui->pushButton_15->setText("bũ");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("búc");
        ui->pushButton_2->setText("bục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bư") {

        ui->pushButton->setText("bưc");
        ui->pushButton_2->setText("bưt");
        ui->pushButton_3->setText("bưn");
        ui->pushButton_4->setText("bưu");
        ui->pushButton_5->setText("bưa");

        ui->pushButton_6->setText("bươ");
        ui->pushButton_7->setText("bử");
        ui->pushButton_8->setText("bứ");
        ui->pushButton_9->setText("bừ");

        ui->pushButton_11->setText("bự");
        ui->pushButton_12->setText("bữ");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bưt") {

        ui->pushButton->setText("bứt");
        ui->pushButton_2->setText("bựt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bươ") {

        ui->pushButton->setText("bưở");
        ui->pushButton_2->setText("bướ");
        ui->pushButton_3->setText("bườ");
        ui->pushButton_4->setText("bượ");
        ui->pushButton_5->setText("bưỡ");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bat") {

        ui->pushButton->setText("bát");
        ui->pushButton_2->setText("bạt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "banh") {

        ui->pushButton->setText("bảnh");
        ui->pushButton_2->setText("bánh");
        ui->pushButton_3->setText("bành");
        ui->pushButton_4->setText("bạnh");
        ui->pushButton_5->setText("bãnh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "băt") {

        ui->pushButton->setText("bắt");
        ui->pushButton_2->setText("bặt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bât") {

        ui->pushButton->setText("bất");
        ui->pushButton_2->setText("bật");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bot") {

        ui->pushButton->setText("bót");
        ui->pushButton_2->setText("bọt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bôt") {

        ui->pushButton->setText("bốt");
        ui->pushButton_2->setText("bột");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bơm") {

        ui->pushButton->setText("bởm");
        ui->pushButton_2->setText("bớm");
        ui->pushButton_3->setText("bờm");
        ui->pushButton_4->setText("bợm");
        ui->pushButton_5->setText("bỡm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bit") {

        ui->pushButton->setText("bít");
        ui->pushButton_2->setText("bịt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bem") {

        ui->pushButton->setText("bẻm");
        ui->pushButton_2->setText("bém");
        ui->pushButton_3->setText("bèm");
        ui->pushButton_4->setText("bẹm");
        ui->pushButton_5->setText("bẽm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bêt") {

        ui->pushButton->setText("bết");
        ui->pushButton_2->setText("bệt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "c") {

        ui->pushButton->setText("ch");
        ui->pushButton_2->setText("cu");
        ui->pushButton_3->setText("cư");
        ui->pushButton_4->setText("ca");
        ui->pushButton_5->setText("că");

        ui->pushButton_6->setText("câ");
        ui->pushButton_7->setText("co");
        ui->pushButton_8->setText("cô");
        ui->pushButton_9->setText("cơ");

        ui->pushButton_11->setText("ci");
        ui->pushButton_12->setText("cê");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cu") {

        ui->pushButton->setText("cuc");
        ui->pushButton_2->setText("cut");
        ui->pushButton_3->setText("cum");
        ui->pushButton_4->setText("cun");
        ui->pushButton_5->setText("cup");

        ui->pushButton_6->setText("cua");
        ui->pushButton_7->setText("cuô");
        ui->pushButton_8->setText("cui");
        ui->pushButton_9->setText("củ");

        ui->pushButton_11->setText("cú");
        ui->pushButton_12->setText("cù");
        ui->pushButton_13->setText("cụ");
        ui->pushButton_14->setText("cũ");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cut") {

        ui->pushButton->setText("cút");
        ui->pushButton_2->setText("cụt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chư") {

        ui->pushButton->setText("chưc");
        ui->pushButton_2->setText("chưn");
        ui->pushButton_3->setText("chưa");
        ui->pushButton_4->setText("chươ");
        ui->pushButton_5->setText("chưi");

        ui->pushButton_6->setText("chử");
        ui->pushButton_7->setText("chứ");
        ui->pushButton_8->setText("chừ");
        ui->pushButton_9->setText("chự");

        ui->pushButton_11->setText("chữ");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chưn") {

        ui->pushButton->setText("chưng");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chươn") {

        ui->pushButton->setText("chương");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chut") {

        ui->pushButton->setText("chút");
        ui->pushButton_2->setText("chụt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chuôt") {

        ui->pushButton->setText("chuốt");
        ui->pushButton_2->setText("chuột");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chat") {

        ui->pushButton->setText("chát");
        ui->pushButton_2->setText("chạt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chanh") {

        ui->pushButton->setText("chảnh");
        ui->pushButton_2->setText("chánh");
        ui->pushButton_3->setText("chành");
        ui->pushButton_4->setText("chạnh");
        ui->pushButton_5->setText("chãnh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chăt") {

        ui->pushButton->setText("chắt");
        ui->pushButton_2->setText("chặt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "châm") {

        ui->pushButton->setText("chẩm");
        ui->pushButton_2->setText("chấm");
        ui->pushButton_3->setText("chầm");
        ui->pushButton_4->setText("chậm");
        ui->pushButton_5->setText("chẫm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chot") {

        ui->pushButton->setText("chót");
        ui->pushButton_2->setText("chọt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choăn") {

        ui->pushButton->setText("choẳn");
        ui->pushButton_2->setText("choắn");
        ui->pushButton_3->setText("choằn");
        ui->pushButton_4->setText("choặn");
        ui->pushButton_5->setText("choẵn");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choen") {

        ui->pushButton->setText("choẻn");
        ui->pushButton_2->setText("choén");
        ui->pushButton_3->setText("choèn");
        ui->pushButton_4->setText("choẹn");
        ui->pushButton_5->setText("choẽn");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chôt") {

        ui->pushButton->setText("chốt");
        ui->pushButton_2->setText("chột");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chơm") {

        ui->pushButton->setText("chởm");
        ui->pushButton_2->setText("chớm");
        ui->pushButton_3->setText("chờm");
        ui->pushButton_4->setText("chợm");
        ui->pushButton_5->setText("chỡm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chit") {

        ui->pushButton->setText("chít");
        ui->pushButton_2->setText("chịt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chiêt") {

        ui->pushButton->setText("chiết");
        ui->pushButton_2->setText("chiệt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chem") {

        ui->pushButton->setText("chẻm");
        ui->pushButton_2->setText("chém");
        ui->pushButton_3->setText("chèm");
        ui->pushButton_4->setText("chẹm");
        ui->pushButton_5->setText("chẽm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chêt") {

        ui->pushButton->setText("chết");
        ui->pushButton_2->setText("chệt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cưt") {

        ui->pushButton->setText("cứt");
        ui->pushButton_2->setText("cựt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cươm") {

        ui->pushButton->setText("cưởm");
        ui->pushButton_2->setText("cướm");
        ui->pushButton_3->setText("cườm");
        ui->pushButton_4->setText("cượm");
        ui->pushButton_5->setText("cưỡm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cat") {

        ui->pushButton->setText("cát");
        ui->pushButton_2->setText("cạt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "canh") {

        ui->pushButton->setText("cảnh");
        ui->pushButton_2->setText("cánh");
        ui->pushButton_3->setText("cành");
        ui->pushButton_4->setText("cạnh");
        ui->pushButton_5->setText("cãnh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "căt") {

        ui->pushButton->setText("cắt");
        ui->pushButton_2->setText("cặt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cât") {

        ui->pushButton->setText("cất");
        ui->pushButton_2->setText("cật");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cot") {

        ui->pushButton->setText("cót");
        ui->pushButton_2->setText("cọt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "côt") {

        ui->pushButton->setText("cốt");
        ui->pushButton_2->setText("cột");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cơm") {

        ui->pushButton->setText("cởm");
        ui->pushButton_2->setText("cớm");
        ui->pushButton_3->setText("cờm");
        ui->pushButton_4->setText("cợm");
        ui->pushButton_5->setText("cỡm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dư") {

        ui->pushButton->setText("dưc");
        ui->pushButton_2->setText("dưt");
        ui->pushButton_3->setText("dưa");
        ui->pushButton_4->setText("dươ");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dươt") {

        ui->pushButton->setText("dướt");
        ui->pushButton_2->setText("dượt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "duôi") {

        ui->pushButton->setText("duổi");
        ui->pushButton_2->setText("duối");
        ui->pushButton_3->setText("duồi");
        ui->pushButton_4->setText("duội");
        ui->pushButton_5->setText("duỗi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "danh") {

        ui->pushButton->setText("dảnh");
        ui->pushButton_2->setText("dánh");
        ui->pushButton_3->setText("dành");
        ui->pushButton_4->setText("dạnh");
        ui->pushButton_5->setText("dãnh");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dăt") {

        ui->pushButton->setText("dắt");
        ui->pushButton_2->setText("dặt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dâm") {

        ui->pushButton->setText("dẩm");
        ui->pushButton_2->setText("dấm");
        ui->pushButton_3->setText("dầm");
        ui->pushButton_4->setText("dậm");
        ui->pushButton_5->setText("dẫm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dot") {

        ui->pushButton->setText("dót");
        ui->pushButton_2->setText("dọt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dôt") {

        ui->pushButton->setText("dốt");
        ui->pushButton_2->setText("dột");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dơp") {

        ui->pushButton->setText("dớp");
        ui->pushButton_2->setText("dợp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dim") {

        ui->pushButton->setText("dỉm");
        ui->pushButton_2->setText("dím");
        ui->pushButton_3->setText("dìm");
        ui->pushButton_4->setText("dịm");
        ui->pushButton_5->setText("dĩm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "diet") {

        ui->pushButton->setText("diết");
        ui->pushButton_2->setText("diệt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "den") {

        ui->pushButton->setText("dẻn");
        ui->pushButton_2->setText("dén");
        ui->pushButton_3->setText("dèn");
        ui->pushButton_4->setText("dẹn");
        ui->pushButton_5->setText("dẽn");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dên") {

        ui->pushButton->setText("dênh");
        ui->pushButton_2->setText("dển");
        ui->pushButton_3->setText("dến");
        ui->pushButton_4->setText("dện");
        ui->pushButton_5->setText("dễn");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
}

void MainWindow::on_pushButton_3_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_3->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if (currentPress == "bum") {
        ui->pushButton->setText("bủm");
        ui->pushButton_2->setText("búm");
        ui->pushButton_3->setText("bùm");
        ui->pushButton_4->setText("bụm");
        ui->pushButton_5->setText("bũm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "buc") {

        ui->pushButton->setText("búc");
        ui->pushButton_2->setText("bục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bưn") {

        ui->pushButton->setText("bưng");
        ui->pushButton_2->setText("bửn");
        ui->pushButton_3->setText("bứn");
        ui->pushButton_4->setText("bừn");
        ui->pushButton_5->setText("bựn");

        ui->pushButton_6->setText("bữn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bươn") {

        ui->pushButton->setText("bương");
        ui->pushButton_2->setText("bưởn");
        ui->pushButton_3->setText("bướn");
        ui->pushButton_4->setText("bườn");
        ui->pushButton_5->setText("bượn");

        ui->pushButton_6->setText("bưỡn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bêt") {

        ui->pushButton->setText("bết");
        ui->pushButton_2->setText("bệt");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cư") {

        ui->pushButton->setText("cưc");
        ui->pushButton_2->setText("cưt");
        ui->pushButton_3->setText("cưn");
        ui->pushButton_4->setText("cưu");
        ui->pushButton_5->setText("cưa");

        ui->pushButton_6->setText("cươ");
        ui->pushButton_7->setText("cưi");
        ui->pushButton_8->setText("cử");
        ui->pushButton_9->setText("cứ");

        ui->pushButton_11->setText("cừ");
        ui->pushButton_12->setText("cự");
        ui->pushButton_13->setText("cữ");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chum") {

        ui->pushButton->setText("chủm");
        ui->pushButton_2->setText("chúm");
        ui->pushButton_3->setText("chùm");
        ui->pushButton_4->setText("chụm");
        ui->pushButton_5->setText("chũm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chuôm") {

        ui->pushButton->setText("chuổm");
        ui->pushButton_2->setText("chuốm");
        ui->pushButton_3->setText("chuồm");
        ui->pushButton_4->setText("chuộm");
        ui->pushButton_5->setText("chuỗm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cha") {

        ui->pushButton->setText("chac");
        ui->pushButton_2->setText("chat");
        ui->pushButton_3->setText("cham");
        ui->pushButton_4->setText("chan");
        ui->pushButton_5->setText("chap");

        ui->pushButton_6->setText("chau");
        ui->pushButton_7->setText("chay");
        ui->pushButton_8->setText("chao");
        ui->pushButton_9->setText("chai");

        ui->pushButton_11->setText("chả");
        ui->pushButton_12->setText("chá");
        ui->pushButton_13->setText("chà");
        ui->pushButton_14->setText("chạ");
        ui->pushButton_15->setText("chã");
    }

    else if (currentPress == "chưa") {

        ui->pushButton->setText("chửa");
        ui->pushButton_2->setText("chứa");
        ui->pushButton_3->setText("chừa");
        ui->pushButton_4->setText("chựa");
        ui->pushButton_5->setText("chữa");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chươp") {

        ui->pushButton->setText("chướp");
        ui->pushButton_2->setText("chượp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cham") {

        ui->pushButton->setText("chảm");
        ui->pushButton_2->setText("chám");
        ui->pushButton_3->setText("chàm");
        ui->pushButton_4->setText("chạm");
        ui->pushButton_5->setText("chãm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chăm") {

        ui->pushButton->setText("chẳm");
        ui->pushButton_2->setText("chắm");
        ui->pushButton_3->setText("chằm");
        ui->pushButton_4->setText("chặm");
        ui->pushButton_5->setText("chẵm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chân") {

        ui->pushButton->setText("chẩn");
        ui->pushButton_2->setText("chấn");
        ui->pushButton_3->setText("chần");
        ui->pushButton_4->setText("chận");
        ui->pushButton_5->setText("chẫn");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chom") {

        ui->pushButton->setText("chỏm");
        ui->pushButton_2->setText("chóm");
        ui->pushButton_3->setText("chòm");
        ui->pushButton_4->setText("chọm");
        ui->pushButton_5->setText("chõm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choai") {

        ui->pushButton->setText("choãi");
        ui->pushButton_2->setText("choái");
        ui->pushButton_3->setText("choài");
        ui->pushButton_4->setText("choại");
        ui->pushButton_5->setText("choãi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chôm") {

        ui->pushButton->setText("chổm");
        ui->pushButton_2->setText("chốm");
        ui->pushButton_3->setText("chồm");
        ui->pushButton_4->setText("chộm");
        ui->pushButton_5->setText("chỗm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chơn") {

        ui->pushButton->setText("chởn");
        ui->pushButton_2->setText("chớn");
        ui->pushButton_3->setText("chờn");
        ui->pushButton_4->setText("chợn");
        ui->pushButton_5->setText("chỡn");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chim") {

        ui->pushButton->setText("chỉm");
        ui->pushButton_2->setText("chím");
        ui->pushButton_3->setText("chìm");
        ui->pushButton_4->setText("chịm");
        ui->pushButton_5->setText("chĩm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chiêm") {

        ui->pushButton->setText("chiểm");
        ui->pushButton_2->setText("chiếm");
        ui->pushButton_3->setText("chiềm");
        ui->pushButton_4->setText("chiệm");
        ui->pushButton_5->setText("chiễm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chen") {

        ui->pushButton->setText("cheng");
        ui->pushButton_2->setText("chẻn");
        ui->pushButton_3->setText("chén");
        ui->pushButton_4->setText("chèn");
        ui->pushButton_5->setText("chẹn");

        ui->pushButton_6->setText("chẽn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chêm") {

        ui->pushButton->setText("chểm");
        ui->pushButton_2->setText("chếm");
        ui->pushButton_3->setText("chềm");
        ui->pushButton_4->setText("chệm");
        ui->pushButton_5->setText("chễm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cum") {

        ui->pushButton->setText("củm");
        ui->pushButton_2->setText("cúm");
        ui->pushButton_3->setText("cùm");
        ui->pushButton_4->setText("cụm");
        ui->pushButton_5->setText("cũm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cuôn") {

        ui->pushButton->setText("cuông");
        ui->pushButton_2->setText("cuổn");
        ui->pushButton_3->setText("cuốn");
        ui->pushButton_4->setText("cuộn");
        ui->pushButton_5->setText("cuỗn");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cưn") {

        ui->pushButton->setText("cưng");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cươn") {

        ui->pushButton->setText("cương");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cam") {

        ui->pushButton->setText("cảm");
        ui->pushButton_2->setText("cám");
        ui->pushButton_3->setText("càm");
        ui->pushButton_4->setText("cạm");
        ui->pushButton_5->setText("cãm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "căm") {

        ui->pushButton->setText("cẳm");
        ui->pushButton_2->setText("cắm");
        ui->pushButton_3->setText("cằm");
        ui->pushButton_4->setText("cặm");
        ui->pushButton_5->setText("cẵm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "câm") {

        ui->pushButton->setText("cẩm");
        ui->pushButton_2->setText("cấm");
        ui->pushButton_3->setText("cầm");
        ui->pushButton_4->setText("cậm");
        ui->pushButton_5->setText("cẫm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "com") {

        ui->pushButton->setText("cỏm");
        ui->pushButton_2->setText("cóm");
        ui->pushButton_3->setText("còm");
        ui->pushButton_4->setText("cọm");
        ui->pushButton_5->setText("cõm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "côm") {

        ui->pushButton->setText("cổm");
        ui->pushButton_2->setText("cốm");
        ui->pushButton_3->setText("cồm");
        ui->pushButton_4->setText("cộm");
        ui->pushButton_5->setText("cỗm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cơn") {

        ui->pushButton->setText("cởn");
        ui->pushButton_2->setText("cớn");
        ui->pushButton_3->setText("cờn");
        ui->pushButton_4->setText("cợn");
        ui->pushButton_5->setText("cỡn");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "d") {

        ui->pushButton->setText("du");
        ui->pushButton_2->setText("dư");
        ui->pushButton_3->setText("da");
        ui->pushButton_4->setText("dă");
        ui->pushButton_5->setText("dâ");

        ui->pushButton_6->setText("do");
        ui->pushButton_7->setText("dô");
        ui->pushButton_8->setText("dơ");
        ui->pushButton_9->setText("di");

        ui->pushButton_11->setText("de");
        ui->pushButton_12->setText("dê");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "da") {

        ui->pushButton->setText("dac");
        ui->pushButton_2->setText("dat");
        ui->pushButton_3->setText("dam");
        ui->pushButton_4->setText("dan");
        ui->pushButton_5->setText("dau");

        ui->pushButton_6->setText("day");
        ui->pushButton_7->setText("dao");
        ui->pushButton_8->setText("di");
        ui->pushButton_9->setText("dả");

        ui->pushButton_11->setText("dá");
        ui->pushButton_12->setText("dà");
        ui->pushButton_13->setText("dạ");
        ui->pushButton_14->setText("dã");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dam") {

        ui->pushButton->setText("dảm");
        ui->pushButton_2->setText("dám");
        ui->pushButton_3->setText("dàm");
        ui->pushButton_4->setText("dạm");
        ui->pushButton_5->setText("dãm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dum") {

        ui->pushButton->setText("dủm");
        ui->pushButton_2->setText("dúm");
        ui->pushButton_3->setText("dùm");
        ui->pushButton_4->setText("dụm");
        ui->pushButton_5->setText("dũm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dưn") {

        ui->pushButton->setText("dưng");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dươn") {

        ui->pushButton->setText("dương");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dăm") {

        ui->pushButton->setText("dẳm");
        ui->pushButton_2->setText("dắm");
        ui->pushButton_3->setText("dằm");
        ui->pushButton_4->setText("dặm");
        ui->pushButton_5->setText("dẵm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dân") {

        ui->pushButton->setText("dâng");
        ui->pushButton_2->setText("dẩn");
        ui->pushButton_3->setText("dấn");
        ui->pushButton_4->setText("dần");
        ui->pushButton_5->setText("dận");

        ui->pushButton_6->setText("dẫn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dom") {

        ui->pushButton->setText("dỏm");
        ui->pushButton_2->setText("dóm");
        ui->pushButton_3->setText("dòm");
        ui->pushButton_4->setText("dọm");
        ui->pushButton_5->setText("dõm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dôn") {

        ui->pushButton->setText("dông");
        ui->pushButton_2->setText("dổn");
        ui->pushButton_3->setText("dốn");
        ui->pushButton_4->setText("dồn");
        ui->pushButton_5->setText("dộn");

        ui->pushButton_6->setText("dỗn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dơi") {

        ui->pushButton->setText("dởi");
        ui->pushButton_2->setText("dới");
        ui->pushButton_3->setText("dời");
        ui->pushButton_4->setText("dợi");
        ui->pushButton_5->setText("dỡi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "din") {

        ui->pushButton->setText("dinh");
        ui->pushButton_2->setText("dỉn");
        ui->pushButton_3->setText("dín");
        ui->pushButton_4->setText("dìn");
        ui->pushButton_5->setText("dịn");

        ui->pushButton_6->setText("dĩn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "diêm") {

        ui->pushButton->setText("diểm");
        ui->pushButton_2->setText("diếm");
        ui->pushButton_3->setText("diềm");
        ui->pushButton_4->setText("diệm");
        ui->pushButton_5->setText("diễm");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dep") {

        ui->pushButton->setText("dép");
        ui->pushButton_2->setText("dẹp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
}

void MainWindow::on_pushButton_4_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_4->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if (currentPress == "bun") {
        ui->pushButton->setText("bủn");
        ui->pushButton_2->setText("bún");
        ui->pushButton_3->setText("bùn");
        ui->pushButton_4->setText("bụn");
        ui->pushButton_5->setText("bũn");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "buôn") {

        ui->pushButton->setText("buông");
        ui->pushButton_2->setText("buổn");
        ui->pushButton_3->setText("buốn");
        ui->pushButton_4->setText("buồn");
        ui->pushButton_5->setText("buộn");

        ui->pushButton_6->setText("buỗn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("búc");
        ui->pushButton_2->setText("bục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bưu") {

        ui->pushButton->setText("bửu");
        ui->pushButton_2->setText("bứu");
        ui->pushButton_3->setText("bừu");
        ui->pushButton_4->setText("bựu");
        ui->pushButton_5->setText("bữu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bươp") {

        ui->pushButton->setText("bướp");
        ui->pushButton_2->setText("bượp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bă") {

        ui->pushButton->setText("băc");
        ui->pushButton_2->setText("băt");
        ui->pushButton_3->setText("băm");
        ui->pushButton_4->setText("băn");
        ui->pushButton_5->setText("băp");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ban") {

        ui->pushButton->setText("bang");
        ui->pushButton_2->setText("banh");
        ui->pushButton_3->setText("bản");
        ui->pushButton_4->setText("bán");
        ui->pushButton_5->setText("bàn");

        ui->pushButton_6->setText("bạn");
        ui->pushButton_7->setText("bãn");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "băn") {

        ui->pushButton->setText("băng");
        ui->pushButton_2->setText("bẳn");
        ui->pushButton_3->setText("bắn");
        ui->pushButton_4->setText("bằn");
        ui->pushButton_5->setText("bặn");

        ui->pushButton_6->setText("bẵn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bân") {

        ui->pushButton->setText("bâng");
        ui->pushButton_2->setText("bẩn");
        ui->pushButton_3->setText("bấn");
        ui->pushButton_4->setText("bần");
        ui->pushButton_5->setText("bận");

        ui->pushButton_6->setText("bẫn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bon") {

        ui->pushButton->setText("bong");
        ui->pushButton_2->setText("bỏn");
        ui->pushButton_3->setText("bón");
        ui->pushButton_4->setText("bòn");
        ui->pushButton_5->setText("bọn");

        ui->pushButton_6->setText("bõn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bôn") {

        ui->pushButton->setText("bông");
        ui->pushButton_2->setText("bổn");
        ui->pushButton_3->setText("bốn");
        ui->pushButton_4->setText("bồn");
        ui->pushButton_5->setText("bộn");

        ui->pushButton_6->setText("bỗn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bơp") {

        ui->pushButton->setText("bớp");
        ui->pushButton_2->setText("bợp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bin") {

        ui->pushButton->setText("binh");
        ui->pushButton_2->setText("bỉn");
        ui->pushButton_3->setText("bín");
        ui->pushButton_4->setText("bìn");
        ui->pushButton_5->setText("bịn");

        ui->pushButton_6->setText("bĩn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bep") {

        ui->pushButton->setText("bép");
        ui->pushButton_2->setText("bẹp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bêp") {

        ui->pushButton->setText("bếp");
        ui->pushButton_2->setText("bệp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "ca") {

        ui->pushButton->setText("cac");
        ui->pushButton_2->setText("cat");
        ui->pushButton_3->setText("cam");
        ui->pushButton_4->setText("can");
        ui->pushButton_5->setText("cap");

        ui->pushButton_6->setText("cau");
        ui->pushButton_7->setText("cay");
        ui->pushButton_8->setText("cao");
        ui->pushButton_9->setText("cai");

        ui->pushButton_11->setText("cả");
        ui->pushButton_12->setText("cá");
        ui->pushButton_13->setText("cà");
        ui->pushButton_14->setText("cạ");
        ui->pushButton_15->setText("cã");
    }
    else if (currentPress == "chă") {

        ui->pushButton->setText("chăc");
        ui->pushButton_2->setText("chăt");
        ui->pushButton_3->setText("chăm");
        ui->pushButton_4->setText("chăn");
        ui->pushButton_5->setText("chăp");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "chun") {

        ui->pushButton->setText("chung");
        ui->pushButton_2->setText("chủn");
        ui->pushButton_3->setText("chún");
        ui->pushButton_4->setText("chùn");
        ui->pushButton_5->setText("chụn");

        ui->pushButton_6->setText("chũn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chuôn") {

        ui->pushButton->setText("chuông");
        ui->pushButton_2->setText("chuổn");
        ui->pushButton_3->setText("chuốn");
        ui->pushButton_4->setText("chuồn");
        ui->pushButton_5->setText("chuộn");

        ui->pushButton_6->setText("chuỗn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chươ") {

        ui->pushButton->setText("chươc");
        ui->pushButton_2->setText("chươn");
        ui->pushButton_3->setText("chươp");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chan") {

        ui->pushButton->setText("chang");
        ui->pushButton_2->setText("chanh");
        ui->pushButton_3->setText("chản");
        ui->pushButton_4->setText("chán");
        ui->pushButton_5->setText("chàn");

        ui->pushButton_6->setText("chạn");
        ui->pushButton_7->setText("chãn");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chăn") {

        ui->pushButton->setText("chăng");
        ui->pushButton_2->setText("chẳn");
        ui->pushButton_3->setText("chắn");
        ui->pushButton_4->setText("chằn");
        ui->pushButton_5->setText("chặn");

        ui->pushButton_6->setText("chẵn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "châp") {

        ui->pushButton->setText("chấp");
        ui->pushButton_2->setText("chập");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chon") {

        ui->pushButton->setText("chong");
        ui->pushButton_2->setText("chỏn");
        ui->pushButton_3->setText("chón");
        ui->pushButton_4->setText("chòn");
        ui->pushButton_5->setText("chọn");

        ui->pushButton_6->setText("chõn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chôn") {

        ui->pushButton->setText("chông");
        ui->pushButton_2->setText("chổn");
        ui->pushButton_3->setText("chốn");
        ui->pushButton_4->setText("chồn");
        ui->pushButton_5->setText("chộn");

        ui->pushButton_6->setText("chỗn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chơp") {

        ui->pushButton->setText("chớp");
        ui->pushButton_2->setText("chợp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chin") {

        ui->pushButton->setText("chinh");
        ui->pushButton_2->setText("chỉn");
        ui->pushButton_3->setText("chín");
        ui->pushButton_4->setText("chìn");
        ui->pushButton_5->setText("chịn");

        ui->pushButton_6->setText("chĩn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chiên") {

        ui->pushButton->setText("chiêng");
        ui->pushButton_2->setText("chiển");
        ui->pushButton_3->setText("chiến");
        ui->pushButton_4->setText("chiền");
        ui->pushButton_5->setText("chiện");

        ui->pushButton_6->setText("chiễn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chep") {

        ui->pushButton->setText("chép");
        ui->pushButton_2->setText("chẹp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chên") {

        ui->pushButton->setText("chênh");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cun") {

        ui->pushButton->setText("cung");
        ui->pushButton_2->setText("củn");
        ui->pushButton_3->setText("cún");
        ui->pushButton_4->setText("cùn");
        ui->pushButton_5->setText("cụn");

        ui->pushButton_6->setText("cũn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cuôi") {

        ui->pushButton->setText("cuổi");
        ui->pushButton_2->setText("cuối");
        ui->pushButton_3->setText("cuồi");
        ui->pushButton_4->setText("cuội");
        ui->pushButton_5->setText("cuỗi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cưu") {

        ui->pushButton->setText("cửu");
        ui->pushButton_2->setText("cứu");
        ui->pushButton_3->setText("cừu");
        ui->pushButton_4->setText("cựu");
        ui->pushButton_5->setText("cữu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cươp") {

        ui->pushButton->setText("cướp");
        ui->pushButton_2->setText("cượp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "can") {

        ui->pushButton->setText("cang");
        ui->pushButton_2->setText("canh");
        ui->pushButton_3->setText("cản");
        ui->pushButton_4->setText("cán");
        ui->pushButton_5->setText("càn");

        ui->pushButton_6->setText("cạn");
        ui->pushButton_7->setText("cãn");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "căn") {

        ui->pushButton->setText("căng");
        ui->pushButton_2->setText("cẳn");
        ui->pushButton_3->setText("cắn");
        ui->pushButton_4->setText("cằn");
        ui->pushButton_5->setText("cặn");

        ui->pushButton_6->setText("cẵn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cân") {

        ui->pushButton->setText("câng");
        ui->pushButton_2->setText("cẩn");
        ui->pushButton_3->setText("cấn");
        ui->pushButton_4->setText("cần");
        ui->pushButton_5->setText("cận");

        ui->pushButton_6->setText("cẫn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "con") {

        ui->pushButton->setText("cong");
        ui->pushButton_2->setText("cỏn");
        ui->pushButton_3->setText("cón");
        ui->pushButton_4->setText("còn");
        ui->pushButton_5->setText("cọn");

        ui->pushButton_6->setText("cõn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "côn") {

        ui->pushButton->setText("công");
        ui->pushButton_2->setText("cổn");
        ui->pushButton_3->setText("cốn");
        ui->pushButton_4->setText("cồn");
        ui->pushButton_5->setText("cộn");

        ui->pushButton_6->setText("cỗn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cơi") {

        ui->pushButton->setText("cởi");
        ui->pushButton_2->setText("cới");
        ui->pushButton_3->setText("cời");
        ui->pushButton_4->setText("cợi");
        ui->pushButton_5->setText("cỡi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dă") {

        ui->pushButton->setText("dăc");
        ui->pushButton_2->setText("dăt");
        ui->pushButton_3->setText("dăm");
        ui->pushButton_4->setText("dăn");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dun") {

        ui->pushButton->setText("dung");
        ui->pushButton_2->setText("dủn");
        ui->pushButton_3->setText("dún");
        ui->pushButton_4->setText("dùn");
        ui->pushButton_5->setText("dụn");

        ui->pushButton_6->setText("dũn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dưa") {

        ui->pushButton->setText("dửa");
        ui->pushButton_2->setText("dứa");
        ui->pushButton_3->setText("dừa");
        ui->pushButton_4->setText("dựa");
        ui->pushButton_5->setText("dữa");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dươi") {

        ui->pushButton->setText("dưởi");
        ui->pushButton_2->setText("dưới");
        ui->pushButton_3->setText("dười");
        ui->pushButton_4->setText("dượi");
        ui->pushButton_5->setText("dưỡi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dan") {

        ui->pushButton->setText("dang");
        ui->pushButton_2->setText("danh");
        ui->pushButton_3->setText("dản");
        ui->pushButton_4->setText("dán");
        ui->pushButton_5->setText("dàn");

        ui->pushButton_6->setText("dạn");
        ui->pushButton_7->setText("dãn");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dăn") {

        ui->pushButton->setText("dăng");
        ui->pushButton_2->setText("dẵn");
        ui->pushButton_3->setText("dắn");
        ui->pushButton_4->setText("dằn");
        ui->pushButton_5->setText("dặn");

        ui->pushButton_6->setText("dẵn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dâp") {

        ui->pushButton->setText("dấp");
        ui->pushButton_2->setText("dập");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "don") {

        ui->pushButton->setText("dong");
        ui->pushButton_2->setText("dỏng");
        ui->pushButton_3->setText("dóng");
        ui->pushButton_4->setText("dòng");
        ui->pushButton_5->setText("dọng");

        ui->pushButton_6->setText("dõng");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dôi") {

        ui->pushButton->setText("dổi");
        ui->pushButton_2->setText("dối");
        ui->pushButton_3->setText("dồi");
        ui->pushButton_4->setText("dội");
        ui->pushButton_5->setText("dỗi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dip") {

        ui->pushButton->setText("díp");
        ui->pushButton_2->setText("dịp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "diên") {

        ui->pushButton->setText("diển");
        ui->pushButton_2->setText("diến");
        ui->pushButton_3->setText("diền");
        ui->pushButton_4->setText("diện");
        ui->pushButton_5->setText("diễn");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "deo") {

        ui->pushButton->setText("dẻo");
        ui->pushButton_2->setText("déo");
        ui->pushButton_3->setText("dèo");
        ui->pushButton_4->setText("dẹo");
        ui->pushButton_5->setText("dẽo");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đ") {

        ui->pushButton->setText("đu");
        ui->pushButton_2->setText("đư");
        ui->pushButton_3->setText("đa");
        ui->pushButton_4->setText("đă");
        ui->pushButton_5->setText("đâ");

        ui->pushButton_6->setText("đo");
        ui->pushButton_7->setText("đô");
        ui->pushButton_8->setText("đơ");
        ui->pushButton_9->setText("đi");

        ui->pushButton_11->setText("đe");
        ui->pushButton_12->setText("đê");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đă") {

        ui->pushButton->setText("đăc");
        ui->pushButton_2->setText("đăt");
        ui->pushButton_3->setText("đăm");
        ui->pushButton_4->setText("đăn");
        ui->pushButton_5->setText("đăp");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đăn") {

        ui->pushButton->setText("đăng");
        ui->pushButton_2->setText("đẳn");
        ui->pushButton_3->setText("đắn");
        ui->pushButton_4->setText("đằn");
        ui->pushButton_5->setText("đặn");

        ui->pushButton_6->setText("đẵn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đun") {

        ui->pushButton->setText("đung");
        ui->pushButton_2->setText("đủn");
        ui->pushButton_3->setText("đún");
        ui->pushButton_4->setText("đùn");
        ui->pushButton_5->setText("đụn");

        ui->pushButton_6->setText("đũn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đuôi") {

        ui->pushButton->setText("đuổi");
        ui->pushButton_2->setText("đuối");
        ui->pushButton_3->setText("đuồi");
        ui->pushButton_4->setText("đuội");
        ui->pushButton_5->setText("đuỗi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đưa") {

        ui->pushButton->setText("đửa");
        ui->pushButton_2->setText("đứa");
        ui->pushButton_3->setText("đừa");
        ui->pushButton_4->setText("đựa");
        ui->pushButton_5->setText("đữa");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đươi") {

        ui->pushButton->setText("đưởi");
        ui->pushButton_2->setText("đưới");
        ui->pushButton_3->setText("đười");
        ui->pushButton_4->setText("đượi");
        ui->pushButton_5->setText("đưỡi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đan") {

        ui->pushButton->setText("đang");
        ui->pushButton_2->setText("đanh");
        ui->pushButton_3->setText("đản");
        ui->pushButton_4->setText("đán");
        ui->pushButton_5->setText("đàn");

        ui->pushButton_6->setText("đạn");
        ui->pushButton_7->setText("đãn");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đăn") {

        ui->pushButton->setText("đăng");
        ui->pushButton_2->setText("đẳn");
        ui->pushButton_3->setText("đắn");
        ui->pushButton_4->setText("đằn");
        ui->pushButton_5->setText("đặn");

        ui->pushButton_6->setText("đẵn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đâp") {

        ui->pushButton->setText("đấp");
        ui->pushButton_2->setText("đập");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đon") {

        ui->pushButton->setText("đong");
        ui->pushButton_2->setText("đỏn");
        ui->pushButton_3->setText("đón");
        ui->pushButton_4->setText("đòn");
        ui->pushButton_5->setText("đọn");

        ui->pushButton_6->setText("đõn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đôn") {

        ui->pushButton->setText("đông");
        ui->pushButton_2->setText("đổn");
        ui->pushButton_3->setText("đốn");
        ui->pushButton_4->setText("đồn");
        ui->pushButton_5->setText("độn");

        ui->pushButton_6->setText("đỗn");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đơp") {

        ui->pushButton->setText("đớp");
        ui->pushButton_2->setText("đợp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "điu") {

        ui->pushButton->setText("đỉu");
        ui->pushButton_2->setText("đíu");
        ui->pushButton_3->setText("đìu");
        ui->pushButton_4->setText("địu");
        ui->pushButton_5->setText("đĩu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "điêp") {

        ui->pushButton->setText("điếp");
        ui->pushButton_2->setText("điệp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đep") {

        ui->pushButton->setText("đép");
        ui->pushButton_2->setText("đẹp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "đêp") {

        ui->pushButton->setText("đếp");
        ui->pushButton_2->setText("đệp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

}

void MainWindow::on_pushButton_5_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_5->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if (currentPress == "bup") {
        ui->pushButton->setText("búp");
        ui->pushButton_2->setText("bụp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("buô");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("bủ");
        ui->pushButton_12->setText("bú");
        ui->pushButton_13->setText("bù");
        ui->pushButton_14->setText("bụ");
        ui->pushButton_15->setText("bũ");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("búc");
        ui->pushButton_2->setText("bục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bưa") {

        ui->pushButton->setText("bửa");
        ui->pushButton_2->setText("bứa");
        ui->pushButton_3->setText("bừa");
        ui->pushButton_4->setText("bựa");
        ui->pushButton_5->setText("bữa");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bươu") {

        ui->pushButton->setText("bưởu");
        ui->pushButton_2->setText("bướu");
        ui->pushButton_3->setText("bườu");
        ui->pushButton_4->setText("bượu");
        ui->pushButton_5->setText("bưỡu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bâ") {

        ui->pushButton->setText("bâc");
        ui->pushButton_2->setText("bât");
        ui->pushButton_3->setText("bâm");
        ui->pushButton_4->setText("bân");
        ui->pushButton_5->setText("bâp");

        ui->pushButton_6->setText("bâu");
        ui->pushButton_7->setText("bây");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bau") {

        ui->pushButton->setText("bảu");
        ui->pushButton_2->setText("báu");
        ui->pushButton_3->setText("bàu");
        ui->pushButton_4->setText("bạu");
        ui->pushButton_5->setText("bãu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "băp") {

        ui->pushButton->setText("bắp");
        ui->pushButton_2->setText("bặp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bâp") {

        ui->pushButton->setText("bấp");
        ui->pushButton_2->setText("bập");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bop") {

        ui->pushButton->setText("bóp");
        ui->pushButton_2->setText("bọp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bôp") {

        ui->pushButton->setText("bốp");
        ui->pushButton_2->setText("bộp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bơi") {

        ui->pushButton->setText("bởi");
        ui->pushButton_2->setText("bới");
        ui->pushButton_3->setText("bời");
        ui->pushButton_4->setText("bợi");
        ui->pushButton_5->setText("bỡi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bip") {

        ui->pushButton->setText("bíp");
        ui->pushButton_2->setText("bịp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "beo") {

        ui->pushButton->setText("bẻo");
        ui->pushButton_2->setText("béo");
        ui->pushButton_3->setText("bèo");
        ui->pushButton_4->setText("bẹo");
        ui->pushButton_5->setText("bẽo");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bêu") {

        ui->pushButton->setText("bểu");
        ui->pushButton_2->setText("bếu");
        ui->pushButton_3->setText("bều");
        ui->pushButton_4->setText("bệu");
        ui->pushButton_5->setText("bễu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "că") {

        ui->pushButton->setText("căc");
        ui->pushButton_2->setText("căt");
        ui->pushButton_3->setText("căm");
        ui->pushButton_4->setText("căn");
        ui->pushButton_5->setText("căp");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chup") {

        ui->pushButton->setText("chúp");
        ui->pushButton_2->setText("chụp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chuôi") {

        ui->pushButton->setText("chuổi");
        ui->pushButton_2->setText("chuối");
        ui->pushButton_3->setText("chuồi");
        ui->pushButton_4->setText("chuội");
        ui->pushButton_5->setText("chuỗi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "châ") {

        ui->pushButton->setText("chât");
        ui->pushButton_2->setText("châm");
        ui->pushButton_3->setText("chân");
        ui->pushButton_4->setText("châp");
        ui->pushButton_5->setText("châu");

        ui->pushButton_6->setText("chây");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chưi") {

        ui->pushButton->setText("chửi");
        ui->pushButton_2->setText("chứi");
        ui->pushButton_3->setText("chừi");
        ui->pushButton_4->setText("chựi");
        ui->pushButton_5->setText("chữi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "chap") {

        ui->pushButton->setText("cháp");
        ui->pushButton_2->setText("chạp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "chăp") {

        ui->pushButton->setText("chắp");
        ui->pushButton_2->setText("chặp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "châu") {

        ui->pushButton->setText("chẩu");
        ui->pushButton_2->setText("chấu");
        ui->pushButton_3->setText("chầu");
        ui->pushButton_4->setText("chậu");
        ui->pushButton_5->setText("chẫu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chop") {

        ui->pushButton->setText("chóp");
        ui->pushButton_2->setText("chọp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chôp") {

        ui->pushButton->setText("chốp");
        ui->pushButton_2->setText("chộp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chơi") {

        ui->pushButton->setText("chởi");
        ui->pushButton_2->setText("chới");
        ui->pushButton_3->setText("chời");
        ui->pushButton_4->setText("chợi");
        ui->pushButton_5->setText("chỡi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chip") {

        ui->pushButton->setText("chíp");
        ui->pushButton_2->setText("chịp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chiêp") {

        ui->pushButton->setText("chiếp");
        ui->pushButton_2->setText("chiệp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cheo") {

        ui->pushButton->setText("chẻo");
        ui->pushButton_2->setText("chéo");
        ui->pushButton_3->setText("chèo");
        ui->pushButton_4->setText("chẹo");
        ui->pushButton_5->setText("chẽo");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chêp") {

        ui->pushButton->setText("chếp");
        ui->pushButton_2->setText("chệp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cup") {

        ui->pushButton->setText("cúp");
        ui->pushButton_2->setText("cụp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "cưa") {

        ui->pushButton->setText("cửa");
        ui->pushButton_2->setText("cứa");
        ui->pushButton_3->setText("cừa");
        ui->pushButton_4->setText("cựa");
        ui->pushButton_5->setText("cữa");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "cươi") {

        ui->pushButton->setText("cưởi");
        ui->pushButton_2->setText("cưới");
        ui->pushButton_3->setText("cười");
        ui->pushButton_4->setText("cượi");
        ui->pushButton_5->setText("cưỡi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cap") {

        ui->pushButton->setText("cáp");
        ui->pushButton_2->setText("cạp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "căp") {

        ui->pushButton->setText("cắp");
        ui->pushButton_2->setText("cặp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "câp") {

        ui->pushButton->setText("cấp");
        ui->pushButton_2->setText("cập");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cop") {

        ui->pushButton->setText("cóp");
        ui->pushButton_2->setText("cọp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "côp") {

        ui->pushButton->setText("cốp");
        ui->pushButton_2->setText("cộp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dâ") {

        ui->pushButton->setText("dât");
        ui->pushButton_2->setText("dâm");
        ui->pushButton_3->setText("dân");
        ui->pushButton_4->setText("dâp");
        ui->pushButton_5->setText("dâu");

        ui->pushButton_6->setText("dây");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dua") {

        ui->pushButton->setText("dủa");
        ui->pushButton_2->setText("dúa");
        ui->pushButton_3->setText("dùa");
        ui->pushButton_4->setText("dụa");
        ui->pushButton_5->setText("dũa");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dươ") {

        ui->pushButton->setText("dươc");
        ui->pushButton_2->setText("dươt");
        ui->pushButton_3->setText("dươn");
        ui->pushButton_4->setText("dươi");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dau") {

        ui->pushButton->setText("dảu");
        ui->pushButton_2->setText("dáu");
        ui->pushButton_3->setText("dàu");
        ui->pushButton_4->setText("dạu");
        ui->pushButton_5->setText("dãu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dâu") {

        ui->pushButton->setText("dẩu");
        ui->pushButton_2->setText("dấu");
        ui->pushButton_3->setText("dầu");
        ui->pushButton_4->setText("dậu");
        ui->pushButton_5->setText("dẫu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "doa") {

        ui->pushButton->setText("doan");
        ui->pushButton_2->setText("dỏa");
        ui->pushButton_3->setText("dóa");
        ui->pushButton_4->setText("dòa");
        ui->pushButton_5->setText("dọa");

        ui->pushButton_6->setText("dõa");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "diu") {

        ui->pushButton->setText("dỉu");
        ui->pushButton_2->setText("díu");
        ui->pushButton_3->setText("dìu");
        ui->pushButton_4->setText("dịu");
        ui->pushButton_5->setText("dĩu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "diêp") {

        ui->pushButton->setText("diếp");
        ui->pushButton_2->setText("diệp");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }


}

void MainWindow::on_pushButton_6_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_6->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if (currentPress == "bua") {
        ui->pushButton->setText("bủa");
        ui->pushButton_2->setText("búa");
        ui->pushButton_3->setText("bùa");
        ui->pushButton_4->setText("bụa");
        ui->pushButton_5->setText("bũa");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "") {

        ui->pushButton->setText("");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("bủ");
        ui->pushButton_12->setText("bú");
        ui->pushButton_13->setText("bù");
        ui->pushButton_14->setText("bụ");
        ui->pushButton_15->setText("bũ");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("búc");
        ui->pushButton_2->setText("bục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bươ") {

        ui->pushButton->setText("bươc");
        ui->pushButton_2->setText("bươ");
        ui->pushButton_3->setText("bươn");
        ui->pushButton_4->setText("bươp");
        ui->pushButton_5->setText("bươu");

        ui->pushButton_6->setText("bươi");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bươi") {

        ui->pushButton->setText("bưởi");
        ui->pushButton_2->setText("bưới");
        ui->pushButton_3->setText("bười");
        ui->pushButton_4->setText("bượi");
        ui->pushButton_5->setText("bưỡi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bo") {

        ui->pushButton->setText("boc");
        ui->pushButton_2->setText("bot");
        ui->pushButton_3->setText("bom");
        ui->pushButton_4->setText("bon");
        ui->pushButton_5->setText("bop");

        ui->pushButton_6->setText("boi");
        ui->pushButton_7->setText("bỏ");
        ui->pushButton_8->setText("bó");
        ui->pushButton_9->setText("bò");

        ui->pushButton_11->setText("bọ");
        ui->pushButton_12->setText("bõ");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bay") {

        ui->pushButton->setText("bảy");
        ui->pushButton_2->setText("báy");
        ui->pushButton_3->setText("bày");
        ui->pushButton_4->setText("bạy");
        ui->pushButton_5->setText("bãy");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bâu") {

        ui->pushButton->setText("bẩu");
        ui->pushButton_2->setText("bấu");
        ui->pushButton_3->setText("bầu");
        ui->pushButton_4->setText("bậu");
        ui->pushButton_5->setText("bẫu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "boi") {

        ui->pushButton->setText("bỏi");
        ui->pushButton_2->setText("bói");
        ui->pushButton_3->setText("bòi");
        ui->pushButton_4->setText("bọi");
        ui->pushButton_5->setText("bõi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bôi") {

        ui->pushButton->setText("bổi");
        ui->pushButton_2->setText("bối");
        ui->pushButton_3->setText("bồi");
        ui->pushButton_4->setText("bội");
        ui->pushButton_5->setText("bỗi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "biu") {

        ui->pushButton->setText("bỉu");
        ui->pushButton_2->setText("bíu");
        ui->pushButton_3->setText("bìu");
        ui->pushButton_4->setText("bịu");
        ui->pushButton_5->setText("bĩu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "câ") {

        ui->pushButton->setText("câc");
        ui->pushButton_2->setText("cât");
        ui->pushButton_3->setText("câm");
        ui->pushButton_4->setText("cân");
        ui->pushButton_5->setText("câp");

        ui->pushButton_6->setText("câu");
        ui->pushButton_7->setText("cây");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cho") {

        ui->pushButton->setText("choc");
        ui->pushButton_2->setText("chot");
        ui->pushButton_3->setText("chom");
        ui->pushButton_4->setText("chon");
        ui->pushButton_5->setText("chop");

        ui->pushButton_6->setText("choa");
        ui->pushButton_7->setText("choă");
        ui->pushButton_8->setText("choi");
        ui->pushButton_9->setText("choe");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chua") {

        ui->pushButton->setText("chủa");
        ui->pushButton_2->setText("chúa");
        ui->pushButton_3->setText("chùa");
        ui->pushButton_4->setText("chụa");
        ui->pushButton_5->setText("chũa");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "chau") {

        ui->pushButton->setText("chảu");
        ui->pushButton_2->setText("cháu");
        ui->pushButton_3->setText("chàu");
        ui->pushButton_4->setText("chạu");
        ui->pushButton_5->setText("chãu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "chây") {

        ui->pushButton->setText("chẩy");
        ui->pushButton_2->setText("chấy");
        ui->pushButton_3->setText("chầy");
        ui->pushButton_4->setText("chậy");
        ui->pushButton_5->setText("chẫy");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choa") {

        ui->pushButton->setText("choac");
        ui->pushButton_2->setText("choan");
        ui->pushButton_3->setText("choai");
        ui->pushButton_4->setText("chỏa");
        ui->pushButton_5->setText("chóa");

        ui->pushButton_6->setText("chòa");
        ui->pushButton_7->setText("chọa");
        ui->pushButton_8->setText("chõa");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chôi") {

        ui->pushButton->setText("chổi");
        ui->pushButton_2->setText("chối");
        ui->pushButton_3->setText("chồi");
        ui->pushButton_4->setText("chội");
        ui->pushButton_5->setText("chỗi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "chiu") {

        ui->pushButton->setText("chỉu");
        ui->pushButton_2->setText("chíu");
        ui->pushButton_3->setText("chìu");
        ui->pushButton_4->setText("chịu");
        ui->pushButton_5->setText("chĩu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chiêu") {

        ui->pushButton->setText("chiểu");
        ui->pushButton_2->setText("chiếu");
        ui->pushButton_3->setText("chiều");
        ui->pushButton_4->setText("chiệu");
        ui->pushButton_5->setText("chiễu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cua") {

        ui->pushButton->setText("của");
        ui->pushButton_2->setText("cúa");
        ui->pushButton_3->setText("cùa");
        ui->pushButton_4->setText("cụa");
        ui->pushButton_5->setText("cũa");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cươ") {

        ui->pushButton->setText("cươc");
        ui->pushButton_2->setText("cươm");
        ui->pushButton_3->setText("cươn");
        ui->pushButton_4->setText("cươp");
        ui->pushButton_5->setText("cươi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cau") {

        ui->pushButton->setText("cảu");
        ui->pushButton_2->setText("cáu");
        ui->pushButton_3->setText("càu");
        ui->pushButton_4->setText("cạu");
        ui->pushButton_5->setText("cãu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "câu") {

        ui->pushButton->setText("cẩu");
        ui->pushButton_2->setText("cấu");
        ui->pushButton_3->setText("cầu");
        ui->pushButton_4->setText("cậu");
        ui->pushButton_5->setText("cẫu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "coi") {

        ui->pushButton->setText("cỏi");
        ui->pushButton_2->setText("cói");
        ui->pushButton_3->setText("còi");
        ui->pushButton_4->setText("cọi");
        ui->pushButton_5->setText("cõi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "côi") {

        ui->pushButton->setText("cổi");
        ui->pushButton_2->setText("cối");
        ui->pushButton_3->setText("cồi");
        ui->pushButton_4->setText("cội");
        ui->pushButton_5->setText("cỗi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "do") {

        ui->pushButton->setText("doc");
        ui->pushButton_2->setText("dot");
        ui->pushButton_3->setText("dom");
        ui->pushButton_4->setText("don");
        ui->pushButton_5->setText("doa");

        ui->pushButton_6->setText("doi");
        ui->pushButton_7->setText("dỏ");
        ui->pushButton_8->setText("dó");
        ui->pushButton_9->setText("dò");

        ui->pushButton_11->setText("dọ");
        ui->pushButton_12->setText("dõ");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "duy") {

        ui->pushButton->setText("duyê");
        ui->pushButton_2->setText("dủy");
        ui->pushButton_3->setText("dúy");
        ui->pushButton_4->setText("dùy");
        ui->pushButton_5->setText("dụy");

        ui->pushButton_6->setText("dũy");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "day") {

        ui->pushButton->setText("dảy");
        ui->pushButton_2->setText("dáy");
        ui->pushButton_3->setText("dày");
        ui->pushButton_4->setText("dạy");
        ui->pushButton_5->setText("dãy");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dây") {

        ui->pushButton->setText("dẩy");
        ui->pushButton_2->setText("dấy");
        ui->pushButton_3->setText("dầy");
        ui->pushButton_4->setText("dậy");
        ui->pushButton_5->setText("dẫy");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "doi") {

        ui->pushButton->setText("dỏi");
        ui->pushButton_2->setText("dói");
        ui->pushButton_3->setText("dòi");
        ui->pushButton_4->setText("dọi");
        ui->pushButton_5->setText("dõi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dia") {

        ui->pushButton->setText("dỉa");
        ui->pushButton_2->setText("día");
        ui->pushButton_3->setText("dìa");
        ui->pushButton_4->setText("dịa");
        ui->pushButton_5->setText("dĩa");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "diêu") {

        ui->pushButton->setText("diểu");
        ui->pushButton_2->setText("diếu");
        ui->pushButton_3->setText("diều");
        ui->pushButton_4->setText("diệu");
        ui->pushButton_5->setText("diễu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

}

void MainWindow::on_pushButton_7_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_7->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if (currentPress == "buy") {
        ui->pushButton->setText("buyt");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("buô");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("bủ");
        ui->pushButton_12->setText("bú");
        ui->pushButton_13->setText("bù");
        ui->pushButton_14->setText("bụ");
        ui->pushButton_15->setText("bũ");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("búc");
        ui->pushButton_2->setText("bục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bô") {

        ui->pushButton->setText("bôc");
        ui->pushButton_2->setText("bôt");
        ui->pushButton_3->setText("bôm");
        ui->pushButton_4->setText("bôn");
        ui->pushButton_5->setText("bôp");

        ui->pushButton_6->setText("bôi");
        ui->pushButton_7->setText("bổ");
        ui->pushButton_8->setText("bố");
        ui->pushButton_9->setText("bồ");

        ui->pushButton_11->setText("bộ");
        ui->pushButton_12->setText("bỗ");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bao") {

        ui->pushButton->setText("bảo");
        ui->pushButton_2->setText("báo");
        ui->pushButton_3->setText("bào");
        ui->pushButton_4->setText("bạo");
        ui->pushButton_5->setText("bão");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bây") {

        ui->pushButton->setText("bẩy");
        ui->pushButton_2->setText("bấy");
        ui->pushButton_3->setText("bầy");
        ui->pushButton_4->setText("bậy");
        ui->pushButton_5->setText("bẫy");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bia") {

        ui->pushButton->setText("bỉa");
        ui->pushButton_2->setText("bía");
        ui->pushButton_3->setText("bìa");
        ui->pushButton_4->setText("bịa");
        ui->pushButton_5->setText("bĩa");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "co") {

        ui->pushButton->setText("coc");
        ui->pushButton_2->setText("cot");
        ui->pushButton_3->setText("com");
        ui->pushButton_4->setText("con");
        ui->pushButton_5->setText("cop");

        ui->pushButton_6->setText("coi");
        ui->pushButton_7->setText("cỏ");
        ui->pushButton_8->setText("có");
        ui->pushButton_9->setText("cò");

        ui->pushButton_11->setText("cọ");
        ui->pushButton_12->setText("cõ");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chô") {

        ui->pushButton->setText("chôc");
        ui->pushButton_2->setText("chôt");
        ui->pushButton_3->setText("chôm");
        ui->pushButton_4->setText("chôn");
        ui->pushButton_5->setText("chôt");

        ui->pushButton_6->setText("chôi");
        ui->pushButton_7->setText("chỗ");
        ui->pushButton_8->setText("chố");
        ui->pushButton_9->setText("chồ");

        ui->pushButton_11->setText("chộ");
        ui->pushButton_12->setText("chỗ");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chuâ") {

        ui->pushButton->setText("chuân");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chay") {

        ui->pushButton->setText("chảy");
        ui->pushButton_2->setText("cháy");
        ui->pushButton_3->setText("chày");
        ui->pushButton_4->setText("chạy");
        ui->pushButton_5->setText("chãy");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "choă") {

        ui->pushButton->setText("choăt");
        ui->pushButton_2->setText("choăn");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chia") {

        ui->pushButton->setText("chỉa");
        ui->pushButton_2->setText("chía");
        ui->pushButton_3->setText("chìa");
        ui->pushButton_4->setText("chịa");
        ui->pushButton_5->setText("chĩa");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cuô") {

        ui->pushButton->setText("cuôc");
        ui->pushButton_2->setText("cuôm");
        ui->pushButton_3->setText("cuôn");
        ui->pushButton_4->setText("cuôi");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "cưi") {

        ui->pushButton->setText("cửi");
        ui->pushButton_2->setText("cứi");
        ui->pushButton_3->setText("cừi");
        ui->pushButton_4->setText("cựi");
        ui->pushButton_5->setText("cữi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "cay") {

        ui->pushButton->setText("cảy");
        ui->pushButton_2->setText("cáy");
        ui->pushButton_3->setText("cày");
        ui->pushButton_4->setText("cạy");
        ui->pushButton_5->setText("cãy");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cây") {

        ui->pushButton->setText("cẩy");
        ui->pushButton_2->setText("cấy");
        ui->pushButton_3->setText("cầy");
        ui->pushButton_4->setText("cậy");
        ui->pushButton_5->setText("cẫy");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dô") {

        ui->pushButton->setText("dôc");
        ui->pushButton_2->setText("dôt");
        ui->pushButton_3->setText("dôn");
        ui->pushButton_4->setText("dôi");
        ui->pushButton_5->setText("dổ");

        ui->pushButton_6->setText("dố");
        ui->pushButton_7->setText("dồ");
        ui->pushButton_8->setText("dộ");
        ui->pushButton_9->setText("dỗ");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "duô") {

        ui->pushButton->setText("duôc");
        ui->pushButton_2->setText("duôi");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dao") {

        ui->pushButton->setText("dảo");
        ui->pushButton_2->setText("dáo");
        ui->pushButton_3->setText("dào");
        ui->pushButton_4->setText("dạo");
        ui->pushButton_5->setText("dão");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "diê") {

        ui->pushButton->setText("diêc");
        ui->pushButton_2->setText("diêt");
        ui->pushButton_3->setText("diêm");
        ui->pushButton_4->setText("diên");
        ui->pushButton_5->setText("diêp");

        ui->pushButton_6->setText("diêu");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

}

void MainWindow::on_pushButton_8_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_8->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if (currentPress == "buô") {
        ui->pushButton->setText("buôc");
        ui->pushButton_2->setText("buôt");
        ui->pushButton_3->setText("buô");
        ui->pushButton_4->setText("buôn");
        ui->pushButton_5->setText("buôi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("buô");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("bủ");
        ui->pushButton_12->setText("bú");
        ui->pushButton_13->setText("bù");
        ui->pushButton_14->setText("bụ");
        ui->pushButton_15->setText("bũ");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("búc");
        ui->pushButton_2->setText("bục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bơ") {

        ui->pushButton->setText("bơt");
        ui->pushButton_2->setText("bơm");
        ui->pushButton_3->setText("bơn");
        ui->pushButton_4->setText("bơp");
        ui->pushButton_5->setText("bơi");

        ui->pushButton_6->setText("bở");
        ui->pushButton_7->setText("bớ");
        ui->pushButton_8->setText("bờ");
        ui->pushButton_9->setText("bợ");

        ui->pushButton_11->setText("bỡ");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bai") {

        ui->pushButton->setText("bải");
        ui->pushButton_2->setText("bái");
        ui->pushButton_3->setText("bài");
        ui->pushButton_4->setText("bại");
        ui->pushButton_5->setText("bãi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "biê") {

        ui->pushButton->setText("biêc");
        ui->pushButton_2->setText("biêt");
        ui->pushButton_3->setText("biêm");
        ui->pushButton_4->setText("biên");
        ui->pushButton_5->setText("biêu");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cô") {

        ui->pushButton->setText("côc");
        ui->pushButton_2->setText("côt");
        ui->pushButton_3->setText("côm");
        ui->pushButton_4->setText("côn");
        ui->pushButton_5->setText("côp");

        ui->pushButton_6->setText("côi");
        ui->pushButton_7->setText("cổ");
        ui->pushButton_8->setText("cố");
        ui->pushButton_9->setText("cồ");

        ui->pushButton_11->setText("cộ");
        ui->pushButton_12->setText("cỗ");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chơ") {

        ui->pushButton->setText("chơt");
        ui->pushButton_2->setText("chơm");
        ui->pushButton_3->setText("chơn");
        ui->pushButton_4->setText("chơp");
        ui->pushButton_5->setText("chơi");

        ui->pushButton_6->setText("chở");
        ui->pushButton_7->setText("chớ");
        ui->pushButton_8->setText("chờ");
        ui->pushButton_9->setText("chợ");

        ui->pushButton_11->setText("chỡ");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "chiê") {

        ui->pushButton->setText("chiêc");
        ui->pushButton_2->setText("chiêt");
        ui->pushButton_3->setText("chiêm");
        ui->pushButton_4->setText("chiên");
        ui->pushButton_5->setText("chiêp");

        ui->pushButton_6->setText("chiêu");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cui") {

        ui->pushButton->setText("củi");
        ui->pushButton_2->setText("cúi");
        ui->pushButton_3->setText("cùi");
        ui->pushButton_4->setText("cụi");
        ui->pushButton_5->setText("cũi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

    else if (currentPress == "cao") {

        ui->pushButton->setText("cảo");
        ui->pushButton_2->setText("cáo");
        ui->pushButton_3->setText("cào");
        ui->pushButton_4->setText("cạo");
        ui->pushButton_5->setText("cão");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dơ") {

        ui->pushButton->setText("dơn");
        ui->pushButton_2->setText("dơp");
        ui->pushButton_3->setText("dơi");
        ui->pushButton_4->setText("dở");
        ui->pushButton_5->setText("dớ");

        ui->pushButton_6->setText("dờ");
        ui->pushButton_7->setText("dợ");
        ui->pushButton_8->setText("dỡ");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dui") {

        ui->pushButton->setText("dủi");
        ui->pushButton_2->setText("dúi");
        ui->pushButton_3->setText("dùi");
        ui->pushButton_4->setText("dụi");
        ui->pushButton_5->setText("dũi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "dai") {

        ui->pushButton->setText("dải");
        ui->pushButton_2->setText("dái");
        ui->pushButton_3->setText("dài");
        ui->pushButton_4->setText("dại");
        ui->pushButton_5->setText("dãi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }


}

void MainWindow::on_pushButton_9_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_9->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if (currentPress == "bui") {
        ui->pushButton->setText("bủi");
        ui->pushButton_2->setText("búi");
        ui->pushButton_3->setText("bùi");
        ui->pushButton_4->setText("bụi");
        ui->pushButton_5->setText("bũi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("buô");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("bủ");
        ui->pushButton_12->setText("bú");
        ui->pushButton_13->setText("bù");
        ui->pushButton_14->setText("bụ");
        ui->pushButton_15->setText("bũ");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("búc");
        ui->pushButton_2->setText("bục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bi") {

        ui->pushButton->setText("bic");
        ui->pushButton_2->setText("bit");
        ui->pushButton_3->setText("bim");
        ui->pushButton_4->setText("bin");
        ui->pushButton_5->setText("bip");

        ui->pushButton_6->setText("biu");
        ui->pushButton_7->setText("bia");
        ui->pushButton_8->setText("biê");
        ui->pushButton_9->setText("bỉ");

        ui->pushButton_11->setText("bí");
        ui->pushButton_12->setText("bì");
        ui->pushButton_13->setText("bị");
        ui->pushButton_14->setText("bĩ");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cơ") {

        ui->pushButton->setText("cơt");
        ui->pushButton_2->setText("cơm");
        ui->pushButton_3->setText("cơn");
        ui->pushButton_4->setText("cơi");
        ui->pushButton_5->setText("cở");

        ui->pushButton_6->setText("cớ");
        ui->pushButton_7->setText("cờ");
        ui->pushButton_8->setText("cợ");
        ui->pushButton_9->setText("cỡ");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "cai") {

        ui->pushButton->setText("cải");
        ui->pushButton_2->setText("cái");
        ui->pushButton_3->setText("cài");
        ui->pushButton_4->setText("cại");
        ui->pushButton_5->setText("cãi");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "chi") {

        ui->pushButton->setText("chic");
        ui->pushButton_2->setText("chit");
        ui->pushButton_3->setText("chim");
        ui->pushButton_4->setText("chin");
        ui->pushButton_5->setText("chip");

        ui->pushButton_6->setText("chiu");
        ui->pushButton_7->setText("chia");
        ui->pushButton_8->setText("chiê");
        ui->pushButton_9->setText("chỉ");

        ui->pushButton_11->setText("chí");
        ui->pushButton_12->setText("chì");
        ui->pushButton_13->setText("chị");
        ui->pushButton_14->setText("chĩ");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "di") {

        ui->pushButton->setText("dic");
        ui->pushButton_2->setText("dim");
        ui->pushButton_3->setText("din");
        ui->pushButton_4->setText("dip");
        ui->pushButton_5->setText("diu");

        ui->pushButton_6->setText("dia");
        ui->pushButton_7->setText("diê");
        ui->pushButton_8->setText("dỉ");
        ui->pushButton_9->setText("dí");

        ui->pushButton_11->setText("dì");
        ui->pushButton_12->setText("dị");
        ui->pushButton_13->setText("dĩ");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "duê") {

        ui->pushButton->setText("duể");
        ui->pushButton_2->setText("duế");
        ui->pushButton_3->setText("duề");
        ui->pushButton_4->setText("duệ");
        ui->pushButton_5->setText("duễ");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }

}

void MainWindow::on_pushButton_10_pressed()
{
    //QString text = ui->pushButton_10->text();
    //text += ui->pushButton_16->text();
   // ui->label->setText(text);
    currentPress = ui->pushButton_10->text();
    nextPress = ui->pushButton->text();
    if(currentPress == "next" && nextPress == "b") {
        ui->pushButton->setText("k");
        ui->pushButton_2->setText("p");
        ui->pushButton_3->setText("x");
        ui->pushButton_4->setText("u");
        ui->pushButton_5->setText("ư");

        ui->pushButton_6->setText("a");
        ui->pushButton_7->setText("ă");
        ui->pushButton_8->setText("â");
        ui->pushButton_9->setText("y");

        ui->pushButton_11->setText("o");
        ui->pushButton_12->setText("ô");
        ui->pushButton_13->setText("ơ");
        ui->pushButton_14->setText("i");
        ui->pushButton_15->setText("e");
    }
    else if(currentPress == "next" && nextPress == "k"){
        ui->pushButton->setText("ê");
        ui->pushButton_2->setText("");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "next" && nextPress == "ê") {
        ui->pushButton->setText("b");
        ui->pushButton_2->setText("c");
        ui->pushButton_3->setText("d");
        ui->pushButton_4->setText("đ");
        ui->pushButton_5->setText("t");

        ui->pushButton_6->setText("g");
        ui->pushButton_7->setText("h");
        ui->pushButton_8->setText("l");
        ui->pushButton_9->setText("m");

        ui->pushButton_11->setText("n");
        ui->pushButton_12->setText("s");
        ui->pushButton_13->setText("qu");
        ui->pushButton_14->setText("r");
        ui->pushButton_15->setText("v");
    }
    currentPress = "";
}

void MainWindow::on_pushButton_11_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_11->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if(currentPress == "b") {
        ui->pushButton->setText("bu");
        ui->pushButton_2->setText("bư");
        ui->pushButton_3->setText("ba");
        ui->pushButton_4->setText("bă");
        ui->pushButton_5->setText("bâ");

        ui->pushButton_6->setText("bo");
        ui->pushButton_7->setText("bô");
        ui->pushButton_8->setText("bơ");
        ui->pushButton_9->setText("bi");

        ui->pushButton_11->setText("be");
        ui->pushButton_12->setText("bê");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("buô");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("bủ");
        ui->pushButton_12->setText("bú");
        ui->pushButton_13->setText("bù");
        ui->pushButton_14->setText("bụ");
        ui->pushButton_15->setText("bũ");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("búc");
        ui->pushButton_2->setText("bục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "be") {

            ui->pushButton->setText("bet");
            ui->pushButton_2->setText("bem");
            ui->pushButton_3->setText("ben");
            ui->pushButton_4->setText("bep");
            ui->pushButton_5->setText("beo");

            ui->pushButton_6->setText("bẻ");
            ui->pushButton_7->setText("bé");
            ui->pushButton_8->setText("bè");
            ui->pushButton_9->setText("bẹ");

            ui->pushButton_11->setText("bẽ");
            ui->pushButton_12->setText("");
            ui->pushButton_13->setText("");
            ui->pushButton_14->setText("");
            ui->pushButton_15->setText("");
        }
    else if (currentPress == "che") {

            ui->pushButton->setText("chet");
            ui->pushButton_2->setText("chem");
            ui->pushButton_3->setText("chen");
            ui->pushButton_4->setText("chep");
            ui->pushButton_5->setText("cheo");

            ui->pushButton_6->setText("chẽ");
            ui->pushButton_7->setText("ché");
            ui->pushButton_8->setText("chè");
            ui->pushButton_9->setText("chẹ");

            ui->pushButton_11->setText("chẽ");
            ui->pushButton_12->setText("");
            ui->pushButton_13->setText("");
            ui->pushButton_14->setText("");
            ui->pushButton_15->setText("");
        }
    else if (currentPress == "chui") {

            ui->pushButton->setText("chủi");
            ui->pushButton_2->setText("chúi");
            ui->pushButton_3->setText("chùi");
            ui->pushButton_4->setText("chụi");
            ui->pushButton_5->setText("chũi");

            ui->pushButton_6->setText("");
            ui->pushButton_7->setText("");
            ui->pushButton_8->setText("");
            ui->pushButton_9->setText("");

            ui->pushButton_11->setText("");
            ui->pushButton_12->setText("");
            ui->pushButton_13->setText("");
            ui->pushButton_14->setText("");
            ui->pushButton_15->setText("");
        }
    else if (currentPress == "de") {

            ui->pushButton->setText("det");
            ui->pushButton_2->setText("den");
            ui->pushButton_3->setText("dep");
            ui->pushButton_4->setText("deo");
            ui->pushButton_5->setText("dẻ");

            ui->pushButton_6->setText("dé");
            ui->pushButton_7->setText("dè");
            ui->pushButton_8->setText("dẹ");
            ui->pushButton_9->setText("dẽ");

            ui->pushButton_11->setText("");
            ui->pushButton_12->setText("");
            ui->pushButton_13->setText("");
            ui->pushButton_14->setText("");
            ui->pushButton_15->setText("");
        }

}

void MainWindow::on_pushButton_12_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_12->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if(currentPress == "b") {
        ui->pushButton->setText("bu");
        ui->pushButton_2->setText("bư");
        ui->pushButton_3->setText("ba");
        ui->pushButton_4->setText("bă");
        ui->pushButton_5->setText("bâ");

        ui->pushButton_6->setText("bo");
        ui->pushButton_7->setText("bô");
        ui->pushButton_8->setText("bơ");
        ui->pushButton_9->setText("bi");

        ui->pushButton_11->setText("be");
        ui->pushButton_12->setText("bê");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("buô");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("bủ");
        ui->pushButton_12->setText("bú");
        ui->pushButton_13->setText("bù");
        ui->pushButton_14->setText("bụ");
        ui->pushButton_15->setText("bũ");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("búc");
        ui->pushButton_2->setText("bục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bê") {

            ui->pushButton->setText("bêc");
            ui->pushButton_2->setText("bêt");
            ui->pushButton_3->setText("bên");
            ui->pushButton_4->setText("bêp");
            ui->pushButton_5->setText("bêu");

            ui->pushButton_6->setText("bể");
            ui->pushButton_7->setText("bế");
            ui->pushButton_8->setText("bề");
            ui->pushButton_9->setText("bệ");

            ui->pushButton_11->setText("bễ");
            ui->pushButton_12->setText("");
            ui->pushButton_13->setText("");
            ui->pushButton_14->setText("");
            ui->pushButton_15->setText("");
        }
    else if (currentPress == "chê") {

            ui->pushButton->setText("chêc");
            ui->pushButton_2->setText("chêt");
            ui->pushButton_3->setText("chêm");
            ui->pushButton_4->setText("chên");
            ui->pushButton_5->setText("chêp");

            ui->pushButton_6->setText("chể");
            ui->pushButton_7->setText("chế");
            ui->pushButton_8->setText("chề");
            ui->pushButton_9->setText("chệ");

            ui->pushButton_11->setText("chễ");
            ui->pushButton_12->setText("");
            ui->pushButton_13->setText("");
            ui->pushButton_14->setText("");
            ui->pushButton_15->setText("");
        }
    else if (currentPress == "dê") {

            ui->pushButton->setText("dêt");
            ui->pushButton_2->setText("dên");
            ui->pushButton_3->setText("dể");
            ui->pushButton_4->setText("dế");
            ui->pushButton_5->setText("dề");

            ui->pushButton_6->setText("dệ");
            ui->pushButton_7->setText("dễ");
            ui->pushButton_8->setText("");
            ui->pushButton_9->setText("");

            ui->pushButton_11->setText("");
            ui->pushButton_12->setText("");
            ui->pushButton_13->setText("");
            ui->pushButton_14->setText("");
            ui->pushButton_15->setText("");
        }
}

void MainWindow::on_pushButton_13_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_13->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if(currentPress == "b") {
        ui->pushButton->setText("bu");
        ui->pushButton_2->setText("bư");
        ui->pushButton_3->setText("ba");
        ui->pushButton_4->setText("bă");
        ui->pushButton_5->setText("bâ");

        ui->pushButton_6->setText("bo");
        ui->pushButton_7->setText("bô");
        ui->pushButton_8->setText("bơ");
        ui->pushButton_9->setText("bi");

        ui->pushButton_11->setText("be");
        ui->pushButton_12->setText("bê");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("buô");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("bủ");
        ui->pushButton_12->setText("bú");
        ui->pushButton_13->setText("bù");
        ui->pushButton_14->setText("bụ");
        ui->pushButton_15->setText("bũ");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("búc");
        ui->pushButton_2->setText("bục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
}

void MainWindow::on_pushButton_14_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_14->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if(currentPress == "b") {
        ui->pushButton->setText("bu");
        ui->pushButton_2->setText("bư");
        ui->pushButton_3->setText("ba");
        ui->pushButton_4->setText("bă");
        ui->pushButton_5->setText("bâ");

        ui->pushButton_6->setText("bo");
        ui->pushButton_7->setText("bô");
        ui->pushButton_8->setText("bơ");
        ui->pushButton_9->setText("bi");

        ui->pushButton_11->setText("be");
        ui->pushButton_12->setText("bê");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("buô");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("bủ");
        ui->pushButton_12->setText("bú");
        ui->pushButton_13->setText("bù");
        ui->pushButton_14->setText("bụ");
        ui->pushButton_15->setText("bũ");
    }

    else if (currentPress == "buc") {

        ui->pushButton->setText("búc");
        ui->pushButton_2->setText("bục");
        ui->pushButton_3->setText("");
        ui->pushButton_4->setText("");
        ui->pushButton_5->setText("");

        ui->pushButton_6->setText("");
        ui->pushButton_7->setText("");
        ui->pushButton_8->setText("");
        ui->pushButton_9->setText("");

        ui->pushButton_11->setText("");
        ui->pushButton_12->setText("");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
}

void MainWindow::on_pushButton_15_pressed()
{
    addTo_Stack();
    currentPress = ui->pushButton_15->text();
    if (currentPress == prePress) {
        ui->pushButton_16->pressed();
    }
    else {
        prePress = currentPress;
        ui->label->setText(comPress + " " + currentPress);
    }
    if(currentPress == "b") {
        ui->pushButton->setText("bu");
        ui->pushButton_2->setText("bư");
        ui->pushButton_3->setText("ba");
        ui->pushButton_4->setText("bă");
        ui->pushButton_5->setText("bâ");

        ui->pushButton_6->setText("bo");
        ui->pushButton_7->setText("bô");
        ui->pushButton_8->setText("bơ");
        ui->pushButton_9->setText("bi");

        ui->pushButton_11->setText("be");
        ui->pushButton_12->setText("bê");
        ui->pushButton_13->setText("");
        ui->pushButton_14->setText("");
        ui->pushButton_15->setText("");
    }
    else if (currentPress == "bu") {

        ui->pushButton->setText("buc");
        ui->pushButton_2->setText("but");
        ui->pushButton_3->setText("bum");
        ui->pushButton_4->setText("bun");
        ui->pushButton_5->setText("bup");

        ui->pushButton_6->setText("bua");
        ui->pushButton_7->setText("buy");
        ui->pushButton_8->setText("buô");
        ui->pushButton_9->setText("bui");

        ui->pushButton_11->setText("bủ");
        ui->pushButton_12->setText("bú");
        ui->pushButton_13->setText("bù");
        ui->pushButton_14->setText("bụ");
        ui->pushButton_15->setText("bũ");
    }
}

void MainWindow::on_pushButton_16_pressed()
{
    //QString text = ui->pushButton_16->text();
    //text += ui->pushButton_16->text();
    if (currentPress != "" && currentPress != "Delete"  && currentPress != "next" && currentPress != "Home") {
        addTo_Stack();
        comPress += " " + currentPress;
        currentPress = "";
    }
    //QString text = ui->label->text();
    QString subString = comPress;
    /*if (comPress.size() > 15) {
        subString = comPress.mid(comPress.size() - 15, 15);

    }*/
    ui->label->setText(subString);
    sPress = ui->pushButton_16->text();
    if(sPress == "space") {
        ui->pushButton->setText("b");
        ui->pushButton_2->setText("c");
        ui->pushButton_3->setText("d");
        ui->pushButton_4->setText("đ");
        ui->pushButton_5->setText("t");

        ui->pushButton_6->setText("g");
        ui->pushButton_7->setText("h");
        ui->pushButton_8->setText("l");
        ui->pushButton_9->setText("m");

        ui->pushButton_11->setText("n");
        ui->pushButton_12->setText("s");
        ui->pushButton_13->setText("qu");
        ui->pushButton_14->setText("r");
        ui->pushButton_15->setText("v");
       // comPress += currentPress;
    }
}

void MainWindow::on_pushButton_17_pressed()
{
    currentPress = ui->pushButton_17->text();
    if (currentPress == "Delete") {
        if (!stack.isEmpty()) {
            QVector<QString> vector;
            vector = stack.pop();
            QString text = vector.at(0);
            text = text.trimmed();
            int pos = text.lastIndexOf(" ");
            comPress = text.left(pos);
            currentPress = text.section(" ", -1);
            //ui->label->setText(currentPress);
            QString mystring = text;
            QString subString = mystring;
            //if (mystring.size() > 15) {
            //    subString = mystring.mid(mystring.size() - 15, 15);

            //}
            ui->label->setText(subString);
            //ui->label->setText(vector.at(0));
            
            ui->pushButton->setText(vector.at(1));
            ui->pushButton_2->setText(vector.at(2));
            ui->pushButton_3->setText(vector.at(3));
            ui->pushButton_4->setText(vector.at(4));
            ui->pushButton_5->setText(vector.at(5));

            ui->pushButton_6->setText(vector.at(6));
            ui->pushButton_7->setText(vector.at(7));
            ui->pushButton_8->setText(vector.at(8));
            ui->pushButton_9->setText(vector.at(9));

            ui->pushButton_11->setText(vector.at(10));
            ui->pushButton_12->setText(vector.at(11));
            ui->pushButton_13->setText(vector.at(12));
            ui->pushButton_14->setText(vector.at(13));
            ui->pushButton_15->setText(vector.at(14));
            
        }
        currentPress = "";
    }
}

void MainWindow::on_pushButton_18_pressed()
{
    //QString text = ui->pushButton_18->text();
    //text += ui->pushButton->text();
    ui->label->setText("");
    if (!stack.isEmpty()) {
        stack.clear();
    }
    currentPress = ui->pushButton_18->text();
    //currentPress = "";
    comPress = "";
    if(currentPress == "Home") {
       ui->pushButton->setText("b");
       ui->pushButton_2->setText("c");
       ui->pushButton_3->setText("d");
       ui->pushButton_4->setText("đ");
       ui->pushButton_5->setText("t");

       ui->pushButton_6->setText("g");
       ui->pushButton_7->setText("h");
       ui->pushButton_8->setText("l");
       ui->pushButton_9->setText("m");

       ui->pushButton_11->setText("n");
       ui->pushButton_12->setText("s");
       ui->pushButton_13->setText("qu");
       ui->pushButton_14->setText("r");
       ui->pushButton_15->setText("v");
    }

    if (error == TOBII_ERROR_NO_ERROR) {
        system("\"C:\\Program Files (x86)\\Tobii\\Tobii EyeX Config\\Tobii.EyeX.Configuration.exe\" -Q");
    }
}
