#include <iostream>
#include "rafi.h"
#include "sub.h"
#include "mul.h"
#include "div.h"
using namespace std;

int main()
{
    Rafi ob1;
    ob1.add();
    SUB ob2;
    ob2.sub();
    Mul ob3;
    ob3.mul();
    Div ob4;
    ob4.div();
    ob1.display();
    return 0;
}
