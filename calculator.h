#ifndef CALCULATOR_H
#define CALCULATOR_H

class calculator 
{ public:
    double add (double x,double y);
    double subtract (double x,double y);
    double multiply (double x,double y);
    double division (double x,double y);
    int factorial (int x);
    int GCD (int x,int y);
    int LCM (int x,int y);
    int random (int x,int y);
};

#endif