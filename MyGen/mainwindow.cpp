#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCoreApplication>
#include "myclass.h"
#include <cmath>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->widget_3->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->widget_3->show();
    QThread *thread= new QThread;
       MyClass *my = new MyClass("A");
       my->moveToThread(thread);
       connect(thread, SIGNAL(started()), my, SLOT(doWork()));

    connect(this, SIGNAL(inData(int,int,int)), my, SLOT(outData(int,int,int)), Qt::DirectConnection);
    emit inData(ui->lineEdit_4->text().toInt(),ui->lineEdit_2->text().toInt(),ui->spinBox->text().toInt());

    connect(this, SIGNAL(inSelect(QString)), my, SLOT(outSelect(QString)), Qt::DirectConnection);
    emit inSelect(filename);

    connect(my, SIGNAL(inGraph(QVector <double>,QVector <double>,QVector<double>,QVector<double>,QVector<double>,QVector<double>)), this, SLOT(outGraph(QVector <double>,QVector <double>,QVector<double>,QVector<double>,QVector<double>,QVector<double>)));

    thread->start();
}

void MainWindow::outGraph(QVector <double> XG,QVector <double> YG,QVector<double> XS,QVector<double> YS, QVector<double> CG, QVector<double> E)
{
    ui->widget_2->legend->setVisible(true);
    ui->widget_3->legend->setVisible(true);
    ui->widget_2->legend->setFont(QFont("Helvetica",9));
    ui->widget_3->legend->setFont(QFont("Helvetica",9));
    ui->widget_2->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
    ui->widget_3->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
    ui->widget_2->clearGraphs();
    ui->widget_2->addGraph();
    ui->widget_2->graph(0)->setName("Регрессия");
    ui->widget_2->graph(0)->setData(XG, YG);
        ui->widget_2->addGraph();
        ui->widget_2->graph(1)->setName("Значения выборки");
        ui->widget_2->graph(1)->setData(XS, YS);
        ui->widget_2->graph(1)->setPen(QColor(255, 0, 0, 255));
        ui->widget_2->graph(1)->setLineStyle(QCPGraph::lsNone);
        ui->widget_2->graph(1)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 4));
    ui->widget_2->xAxis->setLabel("Максимальная температура");
    ui->widget_2->yAxis->setLabel("Максимальный порвы ветра");
    double min = XS[0], max = XS[0];
        for (int i=1; i<XS.length(); i++)
        {
            if (XS[i]<min) min = XS[i];
            if (XS[i]>max) max = XS[i];
        }
    ui->widget_2->xAxis->setRange(min-0.1, max+0.1);
    min = YS[0], max = YS[0];
        for (int i=1; i<YS.length(); i++)
        {
            if (YS[i]<min) min = YS[i];
            if (YS[i]>max) max = YS[i];
        }
        ui->widget_2->yAxis->setRange(min-0.1, max+0.1);
        ui->widget_2->replot();

        ui->widget_3->clearGraphs();
        ui->widget_3->addGraph();
        ui->widget_3->graph(0)->setName("Работа ГА");
        ui->widget_3->graph(0)->setData(CG, E);
        ui->widget_3->xAxis->setLabel("Поколение");
        ui->widget_3->yAxis->setLabel("Ошибка");
        min = CG[0], max = CG[0];
        for (int i=1; i<CG.length(); i++)
        {
            if (CG[i]<min) min = CG[i];
            if (CG[i]>max) max = CG[i];
        }
        ui->widget_3->xAxis->setRange(min-0.1, max+0.1);
        min = E[0], max = E[0];
        for (int i=1; i<E.length(); i++)
        {
            if (E[i]<min) min = E[i];
            if (E[i]>max) max = E[i];
        }
        ui->widget_3->yAxis->setRange(min-0.1, max+0.1);
        ui->widget_3->replot();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->widget_3->hide();
    QThread *thread2= new QThread;
       MyClass *my2 = new MyClass("B");
       my2->moveToThread(thread2);
       connect(thread2, SIGNAL(started()), my2, SLOT(doWork2()));

    connect(this, SIGNAL(inData(int,int,int)), my2, SLOT(outData(int,int,int)), Qt::DirectConnection);
    emit inData(ui->lineEdit_4->text().toInt(),ui->lineEdit_2->text().toInt(),ui->spinBox->text().toInt());

    connect(this, SIGNAL(inCs(double)), my2, SLOT(outCs(double)), Qt::DirectConnection);
    emit inCs(ui->lineEdit_8->text().toDouble());

    connect(this, SIGNAL(inSelect(QString)), my2, SLOT(outSelect(QString)), Qt::DirectConnection);
    emit inSelect(filename);

    connect(my2, SIGNAL(inGraph2(QVector <double>,QVector <double>,QVector<double>,QVector<double>)), this, SLOT(outGraph2(QVector <double>,QVector <double>,QVector<double>,QVector<double>)));

    thread2->start();
}
void MainWindow::outGraph2(QVector <double> XG,QVector <double> YG,QVector<double> XS,QVector<double> YS)
{
    ui->widget_2->legend->setVisible(true);
    ui->widget_2->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
    ui->widget_2->legend->setFont(QFont("Helvetica",9));
    ui->widget_2->clearGraphs();
    ui->widget_2->addGraph();
    ui->widget_2->graph(0)->setName("Регрессия");
    ui->widget_2->graph(0)->setData(XG, YG);
        ui->widget_2->addGraph();
        ui->widget_2->graph(1)->setName("Значения выборки");
        ui->widget_2->graph(1)->setData(XS, YS);
        ui->widget_2->graph(1)->setPen(QColor(255, 0, 0, 255));
        ui->widget_2->graph(1)->setLineStyle(QCPGraph::lsNone);
        ui->widget_2->graph(1)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 4));
    ui->widget_2->xAxis->setLabel("x");
    ui->widget_2->yAxis->setLabel("y");
    double min = XS[0], max = XS[0];
        for (int i=1; i<XS.length(); i++)
        {
            if (XS[i]<min) min = XS[i];
            if (XS[i]>max) max = XS[i];
        }
    ui->widget_2->xAxis->setRange(min-0.1, max+0.1);
    min = YS[0], max = YS[0];
        for (int i=1; i<YS.length(); i++)
        {
            if (YS[i]<min) min = YS[i];
            if (YS[i]>max) max = YS[i];
        }
        ui->widget_2->yAxis->setRange(min-0.1, max+0.1);
        ui->widget_2->replot();
}

void MainWindow::on_pushButton_3_clicked()
{
    filename=QFileDialog::getOpenFileName(this, tr("Открыть файл со значениями выборки"),"",tr("Text file (*.txt)"));

}
