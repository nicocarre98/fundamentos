// ecuacion cuadratica.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "math.h"
#include "stdlib.h"

using namespace std;

float discri(float a, float b, float c);
void reales(float b, float a, float D, float &x, float &y);
float unic(float b,float a);
void ima(float b, float a, float D, float &x, float &y);

void main()
{ float a, b, c, x1, x2, x ,D;
  do{
    cout<<"Ingrese A: ";
    cin>>a;
  }while (a==0);
    cout<<"Ingrese B, C"<<endl;
    cin>>b>>c;
    D= discri(a,b,c); // Llamada a la función discri
    if(D>0)
    {
        reales(b,c,D,x1,x2);
        cout<<x1<<endl; 
        cout<<x2<<endl;
    }
    else
        if(D==0)
        {
            x1=unic(b,a);
            cout<<x1<<endl;
        }
        else
        {ima(b,a,D,x1,x2);
        cout<<"La raiz es imaginaria:"<<x2<<"+"<<x1<<"i";
        cout<<"La raiz es imaginaria:"<<x2<<"-"<<x1<<"i";
    }
    getch();
    system("cls");
}


//SUBPROGRAMAS
float discri(float a, float b, float c)
{
    float D;
    D= b*b-4*a*c;
    return D;
}
void reales(float b, float a, float D, float &x, float &y)
{
    x=(-b + sqrt(D))/2*a;
    y=(-b - sqrt(D))/2*a;

}
float unic(float b, float a)
{
    float X;
    X= -b/2*a;
    return X;
}
void ima(float b, float a, float D, float &x, float &y)
{
    D=D*-1;
    x=(sqrt(D)/2*a);
    y=(-b/(2*a));
}
