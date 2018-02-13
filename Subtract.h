#include <iostream>
#include "Operation.h"

class Subtract : public Operation{
  public: 
    Subtract();
    Subtract(Base*, Base*);
    double evaluate();
};
