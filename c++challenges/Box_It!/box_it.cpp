#include "box_it.hpp"
#include <iostream>

int Box::getLength()
{
  return l;
}


int Box::getBreadth()
{
  return b;
}


int Box::getHeight()
{
  return h;
}



int main()
{
  Box box(1,2,3);
  std::cout << box.getLength() << "\n";
  std::cout << box.getBreadth() << "\n";
  std::cout << box.getHeight() << "\n";
  return 0;
}
