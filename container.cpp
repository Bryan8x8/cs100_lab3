#include "container.h"

//Base Container
void Container::set_sort_function(Sort* sort_function) {
    this->sort_function = sort_function; 
}
