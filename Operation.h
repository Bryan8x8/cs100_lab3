#ifndef OPERATION_H
#define OPERATION_H
#include <iostream>
#include "Base.h"

class Operation : public Base
{
  protected:
    Base* value1;
    Base* value2;
  public: 
    virtual double evaluate() = 0;
};
#endif
