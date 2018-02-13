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
