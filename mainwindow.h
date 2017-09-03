#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_16_clicked();
    void makeMeDouble(bool);
    void Makeplus();
    void MakeMinus();
    void MakeSub();
    void MakeMult();

    void on_pushButton_17_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_15_clicked();

signals:
    void changeValue(int);
    void changeValue(double);
    void makedouble(bool);
    void Plus();
    void Minus();
    void sub();
    void Mult();

private:
    double AfterPointVal();
    double firstVal;
    double secondVal;
    Ui::MainWindow *ui;
    bool itDouble;          //values on stack are not so good. Just Example
    bool wasPlused;
    bool wasSub;
    bool wasMult;
    bool wasMinus;
    bool makePossible;
};

#endif // MAINWINDOW_H
