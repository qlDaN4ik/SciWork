#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{

    Q_OBJECT

public:
    QString filename;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

void outGraph(QVector <double> XG,QVector <double> YG,QVector<double> XS,QVector<double> YS,QVector<double> Cs,QVector<double> E);
void outGraph2(QVector <double> XG,QVector <double> YG,QVector<double> XS,QVector<double> YS);

void on_pushButton_2_clicked();

void on_pushButton_3_clicked();

signals:
    void inData(int,int,int);
    void inCs(double);
    void inSelect(QString);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
