#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QString>

class MyClass : public QObject
{
    Q_OBJECT
public:
    MyClass(QString name);
    QString filen;
    int left,right,mut,N;
    bool F;
    double C;
    void run();

public slots:
    void doWork();
    void outData(int u,int i,int o);
    void doWork2();
    void outCs(double Cs);
    void outSelect(QString filename);

signals:
    void inGraph(QVector <double>,QVector <double>,QVector<double>,QVector<double>,QVector<double>,QVector<double>);
    void inGraph2(QVector <double>,QVector <double>,QVector<double>,QVector<double>);

private:
    QString name;
};

#endif // MYCLASS_H
