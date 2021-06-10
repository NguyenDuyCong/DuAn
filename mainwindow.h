#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <string>

#include <QMainWindow>
#include <QDebug>
#include <QTimer>
#include <QMessageBox>
#include <QString>
#include <QVector>
#include <QStack>
//#include <QChar>

#include <tobii/tobii.h>
#include <tobii/tobii_streams.h>

extern tobii_device_t* device;
extern tobii_api_t* api;
extern float gaze_x;
extern float gaze_y;
extern tobii_error_t error;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QTimer* timer;

private slots:
    void update();
    void update_cursor_tracking();
    
    void on_pushButton_pressed();

    void on_pushButton_2_pressed();

    void on_pushButton_3_pressed();

    void on_pushButton_4_pressed();

    void on_pushButton_5_pressed();

    void on_pushButton_6_pressed();

    void on_pushButton_7_pressed();

    void on_pushButton_8_pressed();

    void on_pushButton_9_pressed();

    void on_pushButton_11_pressed();

    void on_pushButton_12_pressed();

    void on_pushButton_13_pressed();

    void on_pushButton_14_pressed();

    void on_pushButton_15_pressed();

    void on_pushButton_16_pressed();

    void on_pushButton_10_pressed();

    void on_pushButton_18_pressed();

    void on_pushButton_17_pressed();

private:
    Ui::MainWindow *ui;
    QString prePress = "";
    QString currentPress = "";
    QString nextPress = "";
    QString sPress = "";
    QString comPress = "";
    QStack<QVector<QString>> stack;
    void addTo_Stack();
};
#endif // MAINWINDOW_H
