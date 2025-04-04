#include <iostream>
#include "calculator.h"
using namespace std;

int main()
{srand (time(0));
calculator c;
cout<<"subtraction: "<<c.subtract(3,5)<<endl;
cout<<"random:" <<c.random(1,10)<<endl;
cout<<"GCD: "<<c.GCD(3,9)<<endl;


return 0;
}