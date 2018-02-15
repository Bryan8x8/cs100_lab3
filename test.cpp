#include <iostream>
//#include "composite.h"
#include "VecContainer.h"
#include "ListContainer.h"
#include "Sort.h"
#include "Op.h"
#include "Mult.h"
#include "Subtract.h"
#include "Add.h"
#include "Divide.h"
#include "Sqr.h"
using namespace std;

int main() {
    Op* op1 = new Op(5);
    Op* op2 = new Op(2);
    Op* op3 = new Op(4);
    Op* op4 = new Op(6);
    Mult* A = new Mult(op1, op2);
    Subtract* B = new Subtract(op3, op4);
    Add* C = new Add(A, B);
    Sqr* D = new Sqr(C);
/*
    VecContainer* container = new VecContainer();
    ListContainer* container = new ListContainer();
    container->add_element(A);
    container->add_element(B);
    container->add_element(D);
    cout << "Container Before Sort: " << endl;
    container->print();
    container->set_sort_function(new SelectionSort());
    container->sort();	
    cout << "Container After Sort: " << endl;
    container->print();
*/

};
