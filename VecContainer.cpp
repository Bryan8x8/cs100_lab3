#include "VecContainer.h"

void VecContainer:: addElement(Base * element){
  data.push_back(element);
}

void VecContainer::print(){

  for(unsigned i = 0; i < data.size(); ++i){
    cout << data.at(i)->evaluate() << " ";
  }

}

Base * VecContainer:: at(int i){
  return data.at(i);
}

void VecContainer::sort(){
  sort_function->sort(this);
}

void VecContainer:: swap(int i, int j){
Base * temp = data.at(i);
data.at(i) = data.at(j);
data.at(j) = temp;
}

int VecContainer::size(){
  return data.size();
}
