#include "myclass.h"
#include "function.h"
#include <windows.h>
#include <QDebug>
#include <cmath>
#include <ctime>
#include <QByteArray>
#include <QFile>
#include <QString>
#include <QFileDialog>
MyClass::MyClass(QString s) : name(s)
{
}
void MyClass::outSelect(QString filename)
{
    filen=filename;
    F=true;
}
void MyClass::outCs(double Cs)
{
    C=Cs;
}
void MyClass::outData (int u, int i, int o){
left = u;
right = i;
mut = o;
}
void MyClass::doWork()
{
    srand( time(0) );
    QFile file("Result.txt"),file2(filen);
    if(file.exists())
    {
        //Файл уже существует. Перезаписать?
    }
    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Ошибка открытия для записи";
    }

    QByteArray text="";
    QString dd="";
    N=0;
    QList <double> X,Y; // Создание массива выборки
    QVector <double> XG(1000),YG(1000);
    long long cic=0;
if(filen!="")
{
    if(file2.open(QIODevice::ReadOnly |QIODevice::Text))
        {

            while(!file2.atEnd())
            {
                QString str = file2.readLine();
                QStringList lst = str.split(" ");
                X.insert(cic,lst.at(0).toDouble());
                Y.insert(cic,lst.at(1).toDouble());
                cic++;N++;
            }

        }
        else
        {
            qDebug()<< "Ошибка открытия для чтения";
        }
}
else
{
    N=100;
    for(int i=0;i<N;i++)
        {
        double a=0;
        double b=40;
        double randomx=(double(rand()%1000)/1000.)*(b-a)+a;
            X.insert(i,randomx);
            Y.insert(i,sin(randomx)+double(rand()%3-1)/10);
        }
}

    const int count=5,number=10; //Параметры матрицы

    Point maxrate;
    int *maxmass = new int [number]; // Максимальный рейтинг


    int **mass = new int* [count];
    for (int i = 0; i < count; i++) // Создание первой динамической матрицы
    mass[i] = new int [number];

    int **mass2 = new int* [count];
    for (int i = 0; i < count; i++) // Создание второй динамической матрицы
    mass2[i] = new int [number];

    randfill(count,number,mass);

    Point *rating = new Point [count]; // Создание массива рейтинга потомства

    int gencount=20;
    double *maxrating = new double [gencount+1];

    ratefill(count,number,mass,rating,left,right,X,Y,N);

    maxrate=rating[0];

    bestgen(count,number,mass,rating,maxrate,maxmass);

    maxrating[0]=maxrate.y;
    for(int i=0;i<count;i++){
    for(int j=0;j<number;j++){
    dd+=QString::number(mass[i][j])+" ";
    }
    qDebug()<<dd;
    text=QString(dd).toUtf8();
    file.write(text);
    dd="";
    dd="x= "+QString::number(rating[i].x)+" ";
     qDebug()<<dd;
    text=QString(dd).toUtf8();
     file.write(text);
     dd="";
    dd="y= "+QString::number(rating[i].y)+"\n";
     qDebug()<<dd;//Вывод информации о самом самом первой потомстве
     text=QString(dd).toUtf8();
     file.write(text);
     dd="";
    }
    dd="\n\n";
    qDebug()<<dd;
    text=QString(dd).toUtf8();
    file.write(text);


    for(int k=0;k<gencount;k++)// Big Boss Loop
    {
    cross(count,number,mass,mass2,rating);

    mutation(count,number,mass2,mut);

    comprepl(count,number,mass,mass2);

    ratefill(count,number,mass,rating,left,right,X,Y,N);

    bestgen(count,number,mass,rating,maxrate,maxmass);

    maxrating[k+1]=maxrate.y;

    dd="";
    for(int i=0;i<count;i++){
    for(int j=0;j<number;j++){
        dd+=QString::number(mass[i][j])+" ";

    }
     qDebug()<<dd;//Вывод информации
     text=QString(dd).toUtf8();
     file.write(text);
    dd="C= "+QString::number(rating[i].x)+" ";
    qDebug()<<dd;
    text=QString(dd).toUtf8();
    file.write(text);
    dd="E= "+QString::number(rating[i].y)+"\n";
    qDebug()<<dd;
    text=QString(dd).toUtf8();
    file.write(text);
    dd="";
    }
    dd="\n\n";
     qDebug()<<dd;
     text=QString(dd).toUtf8();
     file.write(text);
dd="";
    }

    dd="Лучший результат:\n";
     qDebug()<<dd;//Вывод информации
     text=QString(dd).toUtf8();
     file.write(text);
     dd="";
    for(int i=0;i<number;i++)
        dd+=QString::number(maxmass[i])+" ";

    qDebug()<<dd;//Вывод информации
    text=QString(dd).toUtf8();
    file.write(text);
    dd="Оптимальная размытость= "+QString::number(maxrate.x)+" ";
     qDebug()<<dd;
     text=QString(dd).toUtf8();
     file.write(text);
    dd="Минимальная ошибка= "+QString::number(maxrate.y);
     qDebug()<<dd;
     text=QString(dd).toUtf8();
     file.write(text);
     dd="\n";
     text=QString(dd).toUtf8();
     file.write(text);
     dd="";

     QVector<double> CG(gencount+1),E(gencount+1);
     for(int i=0;i<gencount+1;i++)
         CG[i]=i+1,
         E[i]=maxrating[i];

     QVector<double> XS(N),YS(N);
     for(int i=0;i<N;i++){
         dd=QString::number(X[i])+" "+QString::number(Y[i])+"\n";
          text=QString(dd).toUtf8();
          file.write(text);
     dd="";
         XS[i]=X[i],
                 YS[i]=Y[i];}

     double minX = XS[0], maxX = XS[0];
         for (int i=1; i<XS.length(); i++)
         {
             if (XS[i]<minX) minX = XS[i];
             if (XS[i]>maxX) maxX = XS[i];
         }
for(int i=0;i<1000;i++)
    XG[i]=minX+i*((maxX-minX)/1000),
    YG[i]=M(N,maxrate.x,XG[i],X,Y);





         qRegisterMetaType<QVector<double> >("QVector<double>");
    emit inGraph(XG,YG,XS,YS,CG,E);


    for (int i = 0; i < count; i++)
    delete [] mass[i]; // Освобождение места

    delete[]mass;

    for (int i = 0; i < count; i++)
    delete [] mass2[i]; // Освобождение места

    delete[]mass2;

    delete []maxmass;
    delete []rating;
    X.clear();
    Y.clear();
    XS.clear();
    YS.clear();
    XG.clear();
    YG.clear();
    file.close();
    file2.close(); //Закрытие файлов
}

void MyClass::doWork2()
{
    srand( time(0) );

    QFile file("Result.txt"),file2(filen);
    if(file.exists())
    {
        //Файл уже существует. Перезаписать?
    }
    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Ошибка открытия для записи";
    }

    N=0;
    QList <double> X,Y; // Создание массива выборки
    QVector <double> XG(1000),YG(1000);
    long long cic=0;
if(filen!="")
{
    if(file2.open(QIODevice::ReadOnly |QIODevice::Text))
        {

            while(!file2.atEnd())
            {
                QString str = file2.readLine();
                QStringList lst = str.split(" ");
                X.insert(cic,lst.at(0).toDouble());
                Y.insert(cic,lst.at(1).toDouble());
                cic++;N++;
            }

        }
        else
        {
            qDebug()<< "Ошибка открытия для чтения";
        }
}
else
{
    N=50;
    for(int i=0;i<N;i++)
        {
        double a=-5;
        double b=5;
        double randomx=(double(rand()%1000)/1000.)*(b-a)+a;
            X.insert(i,randomx);
            Y.insert(i,sin(randomx)+double(rand()%3-1)/10);
        }
}

QVector<double> XS(N),YS(N);
for(int i=0;i<N;i++)
    XS[i]=X[i],
            YS[i]=Y[i];

double minX = XS[0], maxX = XS[0];
    for (int i=1; i<XS.length(); i++)
    {
        if (XS[i]<minX) minX = XS[i];
        if (XS[i]>maxX) maxX = XS[i];
    }


for(int i=0;i<1000;i++)
XG[i]=minX+i*((maxX-minX)/1000),
YG[i]=M(N,C,XG[i],X,Y);



    qRegisterMetaType<QVector<double> >("QVector<double>");
emit inGraph2(XG,YG,XS,YS);
    X.clear();
    Y.clear();
    XS.clear();
    YS.clear();
    XG.clear();
    YG.clear();
    file.close();
    file2.close();
}
