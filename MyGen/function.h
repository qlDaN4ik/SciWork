#ifndef FUNCTION_H
#define FUNCTION_H


#include <QList>


struct Point
{
double x;
double y;
};
double f(double);
void randfill(int,int, int**);
int tourn(int, Point *);
void ratefill(int,int,int**,Point*,int,int,QList<double>,QList<double>,int);
void cross(int,int,int**,int**,Point*);
void mutation(int,int,int**,int);
void bestgen(int,int,int**,Point*,Point&,int*);
void comprepl(int,int,int**,int**);
double F(double);
double G(int,double,double, QList <double>, QList <double>);
double M(int,double,double, QList <double>, QList <double>);
double Error(int,QList<double>,QList<double>,double);
#endif // FUNCTION_H
