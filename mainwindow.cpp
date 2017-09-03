#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QShortcut>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Calculator");
    QObject::connect(this,SIGNAL(changeValue(int)),ui->lcdNumber,SLOT(display(int)));
    QObject::connect(this,SIGNAL(changeValue(double)),ui->lcdNumber,SLOT(display(double)));
    QObject::connect(this,SIGNAL(makedouble(bool)),this,SLOT(makeMeDouble(bool)));
    QObject::connect(this,SIGNAL(Plus()),this,SLOT(Makeplus()));
    QObject::connect(this,SIGNAL(Minus()),this,SLOT(MakeMinus()));
    QObject::connect(this,SIGNAL(sub()),this,SLOT(MakeSub()));
    QObject::connect(this,SIGNAL(Mult()),this,SLOT(MakeMult()));
    wasMinus = false;
    wasMult = false;
    wasPlused = false;
    wasSub = false;

    QShortcut * key_1 = new QShortcut(Qt::Key_1,this);
    QShortcut * key_2 = new QShortcut(Qt::Key_2,this);
    QShortcut * key_3 = new QShortcut(Qt::Key_3,this);
    QShortcut * key_4 = new QShortcut(Qt::Key_4,this);
    QShortcut * key_5 = new QShortcut(Qt::Key_5,this);
    QShortcut * key_6 = new QShortcut(Qt::Key_6,this);
    QShortcut * key_7 = new QShortcut(Qt::Key_7,this);
    QShortcut * key_8 = new QShortcut(Qt::Key_8,this);
    QShortcut * key_9 = new QShortcut(Qt::Key_9,this);
    QShortcut * key_0 = new QShortcut(Qt::Key_0,this);
    QShortcut * key_point = new QShortcut(Qt::Key_Delete,this);
    QShortcut * key_plus = new QShortcut(Qt::Key_Plus,this);
    QShortcut * key_sub = new QShortcut(Qt::Key_Slash,this);
    QShortcut * key_minus = new QShortcut(Qt::Key_Minus,this);
    QShortcut * key_mult = new QShortcut(Qt::Key_multiply,this);
    QShortcut * key_res = new QShortcut(Qt::Key_Enter,this);
    QShortcut * key_C = new QShortcut(Qt::Key_Backspace,this);
    QObject::connect(key_1,SIGNAL(activated()),ui->pushButton,SLOT(click()));
    QObject::connect(key_2,SIGNAL(activated()),ui->pushButton_3,SLOT(click()));
    QObject::connect(key_3,SIGNAL(activated()),ui->pushButton_5,SLOT(click()));
    QObject::connect(key_4,SIGNAL(activated()),ui->pushButton_2,SLOT(click()));
    QObject::connect(key_5,SIGNAL(activated()),ui->pushButton_4,SLOT(click()));
    QObject::connect(key_6,SIGNAL(activated()),ui->pushButton_6,SLOT(click()));
    QObject::connect(key_7,SIGNAL(activated()),ui->pushButton_9,SLOT(click()));
    QObject::connect(key_8,SIGNAL(activated()),ui->pushButton_10,SLOT(click()));
    QObject::connect(key_9,SIGNAL(activated()),ui->pushButton_11,SLOT(click()));
    QObject::connect(key_0,SIGNAL(activated()),ui->pushButton_15,SLOT(click()));
    QObject::connect(key_point,SIGNAL(activated()),ui->pushButton_16,SLOT(click()));
    QObject::connect(key_plus,SIGNAL(activated()),ui->pushButton_12,SLOT(click()));
    QObject::connect(key_sub,SIGNAL(activated()),ui->pushButton_7,SLOT(click()));
    QObject::connect(key_minus,SIGNAL(activated()),ui->pushButton_13,SLOT(click()));
    QObject::connect(key_mult,SIGNAL(activated()),ui->pushButton_8,SLOT(click()));
    QObject::connect(key_res,SIGNAL(activated()),ui->pushButton_17,SLOT(click()));
    QObject::connect(key_C,SIGNAL(activated()),ui->pushButton_18,SLOT(click()));
}





MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    double val = 1;
    if(itDouble)
    {

        emit changeValue((ui->lcdNumber->value()) + val/AfterPointVal());
    }
    else
    {
        emit changeValue((ui->lcdNumber->value()*10)+val);
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    double val = 2;
    if(itDouble)
    {

        emit changeValue((ui->lcdNumber->value()) + val/AfterPointVal());
    }
    else
    {
        emit changeValue((ui->lcdNumber->value()*10)+val);
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    double val = 3;
    if(itDouble)
    {

        emit changeValue((ui->lcdNumber->value()) + val/AfterPointVal());
    }
    else
    {
        emit changeValue((ui->lcdNumber->value()*10)+val);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    double val = 4;
    if(itDouble)
    {

        emit changeValue((ui->lcdNumber->value()) + val/AfterPointVal());
    }
    else
    {
        emit changeValue((ui->lcdNumber->value()*10)+val);
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    double val = 5;
    if(itDouble)
    {

        emit changeValue((ui->lcdNumber->value()) + val/AfterPointVal());
    }
    else
    {
        emit changeValue((ui->lcdNumber->value()*10)+val);
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    double val = 6;
    if(itDouble)
    {

        emit changeValue((ui->lcdNumber->value()) + val/AfterPointVal());
    }
    else
    {
        emit changeValue((ui->lcdNumber->value()*10)+val);
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    double val = 7;
    if(itDouble)
    {

        emit changeValue((ui->lcdNumber->value()) + val/AfterPointVal());
    }
    else
    {
        emit changeValue((ui->lcdNumber->value()*10)+val);
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    double val = 8;
    if(itDouble)
    {

        emit changeValue((ui->lcdNumber->value()) + val/AfterPointVal());
    }
    else
    {
        emit changeValue((ui->lcdNumber->value()*10)+val);
    }
}

void MainWindow::on_pushButton_11_clicked()
{
    double val = 9;
    if(itDouble)
    {

        emit changeValue((ui->lcdNumber->value()) + val/AfterPointVal());
    }
    else
    {
        emit changeValue((ui->lcdNumber->value()*10)+val);
    }

}


void MainWindow::on_pushButton_16_clicked()
{

     emit makedouble(true);
}
double MainWindow::AfterPointVal()
{
    QString s = QString::number(ui->lcdNumber->value());
    double result = 10;
    if(s.contains("."))
    {

    for(int i(0); i < ((s.size() - s.indexOf(".")) - 1); i++)
        result*=result;
    }

    return result;
}
void MainWindow::makeMeDouble(bool)
{
    itDouble = true;
}

void MainWindow::Makeplus()
{
    firstVal = ui->lcdNumber->value();
    ui->lcdNumber->display(0);
    wasPlused = true;
    makePossible = true;
    itDouble = false;
}
void MainWindow::MakeMinus()
{
    firstVal = ui->lcdNumber->value();
    ui->lcdNumber->display(0);
    wasMinus = true;
    makePossible = true;
    itDouble = false;
}
void MainWindow::MakeSub()
{
    firstVal = ui->lcdNumber->value();
    ui->lcdNumber->display(0);
    wasSub = true;
    makePossible = true;
    itDouble = false;
}
void MainWindow::MakeMult()
{
    firstVal = ui->lcdNumber->value();
    ui->lcdNumber->display(0);
    wasMult = true;
    makePossible = true;
    itDouble = false;
}

void MainWindow::on_pushButton_17_clicked()
{
    if(makePossible)
    {
        secondVal = ui->lcdNumber->value();
        if(wasPlused)
        {
            ui->lcdNumber->display(firstVal+secondVal);
        }
        if(wasMinus)
        {
            ui->lcdNumber->display(firstVal-secondVal);
        }
        if(wasMult)
        {
            ui->lcdNumber->display(firstVal*secondVal);
        }
        if(wasSub)
        {
            ui->lcdNumber->display(firstVal/secondVal);
        }

    }
}

void MainWindow::on_pushButton_12_clicked()
{
    emit Plus();
}

void MainWindow::on_pushButton_7_clicked()
{
    emit sub();
}

void MainWindow::on_pushButton_8_clicked()
{
    emit Mult();
}

void MainWindow::on_pushButton_13_clicked()
{
    emit Minus();
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->lcdNumber->display(0);
    wasMinus = false;
    wasMult = false;
    wasPlused = false;
    wasSub = false;
    itDouble = false;
    makePossible = false;


}

void MainWindow::on_pushButton_15_clicked()
{
    double val = 0;
    if(itDouble)
    {

        emit changeValue((ui->lcdNumber->value()) + val/AfterPointVal());
    }
    else
    {
        emit changeValue((ui->lcdNumber->value()*10)+val);
    }

}
