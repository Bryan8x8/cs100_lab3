#ifndef SELECTION_SORT
#define SELECTION_SORT
#include "strategy.h"
#include "container.h"

using namespace std;


class SelectionSort: public Sort
{
public:
  SelectionSort(): Sort(){};
  void sort(Container* container);
};
#endif
