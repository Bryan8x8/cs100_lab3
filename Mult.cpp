#include "Mult.h"

Mult::Mult()
{
   value1 = 0;
   value2 = 0;
}

Mult::Mult(Base* input1, Base* input2)
{
    value1 = input1;
    value2 = input2;
}

double Mult::evaluate()
{
    return (value1->evaluate() * value2->evaluate());
}
