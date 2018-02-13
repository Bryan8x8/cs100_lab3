#include <iostream>
#include "Base.h"

class Op : Base{
  private:
    double value;
  public: 
    Op();
    Op(double);
    double evaluate();
};
