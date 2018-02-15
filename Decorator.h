#ifndef DECORATOR_H
#define DECORATOR_H
#include "component.h"
#include <cmath>
class Decorator: public Base
{
  protected:
  Base* child;
  public:
  Decorator();
  Decorator(Base*);
  virtual double evaluate() = 0;
};

#endif
