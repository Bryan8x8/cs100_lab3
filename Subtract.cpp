#include "Subtract.h"

Subtract::Subtract()
{
   value1 = 0;
   value2 = 0;
}

Subtract::Subtract(Base* input1, Base* input2)
{
    value1 = input1;
    value2 = input2;
}

double Subtract::evaluate()
{
    return (value1->evaluate() - value2->evaluate());
}
