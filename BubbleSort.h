#ifndef BUBBLE_SORT
#define BUBBLE_SORT
#include "Sort.h"
#include "container.h"

using namespace std;


class BubbleSort: public Sort
{
public:
  BubbleSort(){};
  void sort(Container* container);
};
#endif
