#include <iostream>
#include "Operation.h"

class Add : public Operation{
  public: 
    Add();
    Add(Base*, Base*);
    double evaluate();
};
