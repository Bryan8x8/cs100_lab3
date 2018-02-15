#include <iostream>
#include "Base.h"

class Square : public Base{
  protected:
    Base* value1;
  public: 
    Square();
    Square(Base*);
    double evaluate();
};
