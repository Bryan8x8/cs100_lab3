#ifndef OP_H
#define OP_H
#include <iostream>
#include "component.h"

<<<<<<< HEAD
class Op :public  Base{
=======
class Op : public Base{
>>>>>>> b705310c32cc3b385b6d928ff82349f0359edd0c
  private:
    double value;
  public: 
    Op();
    Op(double);
    double evaluate();
};

#endif
