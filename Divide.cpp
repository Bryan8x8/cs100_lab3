#include "Divide.h"

Divide::Divide()
{
   value1 = 0;
   value2 = 0;
}

Divide::Divide(Base* input1, Base* input2)
{
    value1 = input1;
    value2 = input2;
}

double Divide::evaluate()
{
    return (value1->evaluate() / value2->evaluate());
}
