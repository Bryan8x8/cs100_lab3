#include <iostream>
#include "component.h"

class Op :public  Base{
  private:
    double value;
  public: 
    Op();
    Op(double);
    double evaluate();
};
