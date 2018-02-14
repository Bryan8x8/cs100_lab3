#ifdef VEC_CONTAINER
#define VEC_CONTAINER
#include "container.h"
#include "Sort.h"
#include <vector>
#include <iostream>

using namespace std;

class Sort;

class VecContainer: public Container
{
private:
vector<Base *> data;

public:
VecContainer() : Container(){};
VecContainer(Sort * func) : Container(func) {};
void sort();
void addElement(Base * element);
void print();
void swap(int i, int j);
Base * at(int i);
int size();

};
#endif
