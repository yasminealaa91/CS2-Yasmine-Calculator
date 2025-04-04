
#include <iostream>
#include "calculator.h"
using namespace std;

double calculator::add (double x,double y)
{
    return x+y;
}

double calculator::subtract (double x,double y)
{
    if (x>y)
    {return x-y;}
    return y-x;
}

double calculator::multiply (double x,double y)
{
    return x*y;
}

double calculator::division (double x,double y)
{
   if (y==0)
   {double x,y;
    cout<<"invalid, enter a denominator other than zero:"<<endl;
   cin>>y;
   cout<<"enter numerator again"<<endl;
   cin>>x;
   division (x,y);}
   return x/y;
}

int calculator:: factorial (int x)
{ int a=1;
    for (int i=1;i<x;i++)
    a*=i;
    return a;
}

int calculator:: GCD (int x,int y)
{
    if (y==0)
    return x;
    return GCD(y,x%y);
}

int calculator:: LCM (int x,int y)
{
    return (x/GCD(x,y))*y;
}

int calculator:: random (int x,int y)
{
    return rand() % (y-x +1) +x;
}
