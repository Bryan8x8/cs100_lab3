#ifndef SQUARE_H
#define SQUARE_H

#include "Square.h"

Square::Square()
{
   value1 = 0;
}

Square::Square(Base* input1)
{
    value1 = input1;
}

double Square::evaluate()
{
    return ((value1->evaluate()) * (value1->evaluate()));
}

#endif
