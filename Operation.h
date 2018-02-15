#ifndef __OPERATION_H__
#define __OPERATION_H__
#include <iostream>
#include "component.h"

class Operation : public Base
{
  protected:
    Base* value1;
    Base* value2;
  public: 
    virtual double evaluate() = 0;
Operation();

};

#endif
