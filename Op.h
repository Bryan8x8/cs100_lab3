#ifndef OP_H
#define OP_H
#include <iostream>
#include "component.h"

class Op : public Base{

  private:
    double value;
  public: 
    Op();
    Op(double);
    double evaluate();
};

#endif
