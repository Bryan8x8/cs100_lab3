#include <iostream>
#include "Operation.h"

class Mult : public Operation{
  public: 
    Mult();
    Mult(Base*, Base*);
    double evaluate();
};
