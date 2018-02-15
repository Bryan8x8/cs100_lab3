#ifndef ADD_H
#define ADD_H
#include "Add.h"

Add::Add()
{
   value1 = 0;
   value2 = 0;
}

Add::Add(Base* input1, Base* input2)
{
    value1 = input1;
    value2 = input2;
}

double Add::evaluate()
{
    return (value1->evaluate() + value2->evaluate());
}

#endif
