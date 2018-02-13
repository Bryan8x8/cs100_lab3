#include "Op.h"

Op::Op()
{
    value = 0;
}

Op::Op(double input)
{
    value = input;
}

double Op::evaluate()
{
    return value;
}
