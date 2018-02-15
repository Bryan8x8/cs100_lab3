#ifndef VEC_CONTAINER
#define VEC_CONTAINER
#include "container.h"
#include "strategy.h"
#include <vector>
#include <iostream>

using namespace std;


class VecContainer: public Container
{
private:
vector<Base *> data;

public:
VecContainer();
VecContainer(Sort* func);
void sort();
void add_element(Base* element);
void print();
void swap(int i, int j);
Base* at(int i);
int size();

};
#endif
