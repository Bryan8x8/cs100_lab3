#ifndef BASE_H
#define BASE_H
#include <iostream>
class Base{
  public: 
    /* Constructors */
    Base() { }
    /* Pure Virtual Functions */
    virtual double evaluate() = 0;
};

#endif
