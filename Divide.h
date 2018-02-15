#ifndef DIVIDE_H
#define DIVID_H
#include <iostream>
#include "Operation.h"

class Divide : public Operation{
  public: 
    Divide();
    Divide(Base*, Base*);
    double evaluate();
};

#endif
