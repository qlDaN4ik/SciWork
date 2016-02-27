#include "function.h"
#include <math.h>
#include <time.h>
#include <cstdlib>
#include <QString>
double Parabola(double x)
{
    double Result;
    Result=-(x-1)*(x-1);
    return Result;
}

double Multiextremal(double x)
{
double Result;
Result = (0.05*(x-1.)*(x-1.)+(3.-2.9*exp(-2.77257*x*x))*(1-cos(x*(4.-50*exp(-2.77257*x*x)))));
return Result;
}

double Multiextremal2(double x)
{
double Result;
Result = 1.-0.5*cos(1.5*(10.*x-0.3))*cos(31.4*x)+0.5*cos(sqrt(5.)*10.*x)*cos(35.*x);
return Result;
}

double Wave(double x)
{
double Result;
Result = (exp(-x*x)+0.01*cos(200*x));
return Result;
}

void randfill(int count, int number, int **mass) // Псевдослучайное заполнение матрицы
{
    for(int i=0;i<count;i++)
        for(int j=0;j<number;j++)
            mass[i][j]=rand()%2;
}

int tourn(int count, Point *rating) //"Турнир"
{
    int first=rand()%count;
    int second=rand()%count;
    if(rating[first].y>rating[second].y) return first;
    else return second;
}
void ratefill(int count, int number, int **mass, Point *rating, int left, int right, QList <double> X,  QList <double> Y,int N) //Заполнение массива рейтинга потомства
{
    int rate;
    double h=(right-left)/pow(2,number);
    for(int i=0;i<count;i++){
        rate=0;
        for (int j=number-1;j>=0;j--)
        {
           if (mass[i][number-1-j]==1)
           rate+=pow(2,j);
        }
           double x = left+rate*h;
           rating[i].x=x;
           rating[i].y=Error(N,X,Y,x);

    }
}
void cross(int count, int number, int **mass, int **mass2,Point *rating) // Скрещивание
{
    int parrent=0,parrent2=0,part=0;
    for(int i=0;i<count;i++){
        parrent=tourn(count,rating);
        parrent2=tourn(count,rating);
        part=rand()%number;
        for(int j=0;j<part;j++){
            mass2[i][j]=mass[parrent][j];
        }
        for(int j=part;j<number;j++){
            mass2[i][j]=mass[parrent2][j];
        }
    }
}
void mutation(int count, int number, int **mass2,int mut) // Мутация(1%)
{
    int resmut=0;
    for(int i=0;i<count;i++){
        for(int j=0;j<number;j++){
            resmut=rand()%100;
            if(resmut>=0 && resmut<mut)
            {
                if(mass2[i][j]==0) mass2[i][j]=1;
                else if(mass2[i][j]==1) mass2[i][j]=0;
            }
        }
    }
}
void bestgen(int count, int  number, int **mass, Point *rating, Point &maxrate, int *maxmass) //  Лучшее поколение
{
    for(int i=0;i<count;i++)
    {
    if(maxrate.y<=rating[i].y)
      {
        maxrate=rating[i];
            for(int j=0;j<number;j++)
            {
                maxmass[j]=mass[i][j];
            }
      }
    }
}
void comprepl(int count, int number, int **mass, int **mass2)
{
    for(int i=0;i<count;i++){
        for(int j=0;j<number;j++){
            mass[i][j]=mass2[i][j];
        }}
}
    double F(double z) {
        double f = 0;
        if (z * z <= 5)
            f = 0.335 - 0.067 * z * z;
        return f;
    }

    double G(int N, double C, double x, QList <double> X, QList <double> Y) {
        double y = 0;
        double s1 = 0;
        double s2 = 0;
        for (int i = 0; i < N; i++) {
            s1 += Y[i] * F((x - X[i]) / C);
            s2 += F((x - X[i]) / C);
        }
        if (s2 == 0) y = 0;
        else y = s1 / s2;
        return y;
    }

    double M(int N, double C, double x,  QList <double> X,  QList <double> Y) {
        double y = 0;
        double s1 = 0;
        double s2 = 0;
        for (int i = 0; i < N; i++) {
            if (X[i]!= x) {
                s1 += Y[i] * F((x - X[i]) / C);
                s2 += F((x - X[i]) / C);
            }
        }
        if (s2 == 0) y = 0;
        else y = s1 / s2;
        return y;
    }
    double Error(int N, QList <double> X, QList <double> Y, double C)
    {
        double E=0;
        for (int i = 0; i < N; i++) {
            E = E + (Y[i] - M(N,C, X[i], X, Y))*(Y[i] - M(N,C, X[i], X, Y));
        }
        E = E/(double)N;
        E=-1*sqrt(E);
        return E;
    }
