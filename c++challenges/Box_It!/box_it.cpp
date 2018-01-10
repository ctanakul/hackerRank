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


long long Box::CalculateVolume()
{
  return b*h*l;
}

bool Box::operator<(const Box& box)
{
  if (this->l < box.l) return true;
  else if (this->l == box.l && this->b < box.b) return true;
  else if (this->l == box.l && this->b == box.b && this->h < box.h) return true;
  else return false;
}

std::ostream& operator<<(std::ostream& target, const Box& box)
{
  target << box.l << " " << box.b << " " << box.h;
  return target;						     
}
  

  int main()
{
  Box boxa(1,2,3);
  Box boxb(0,4,5);
  std::cout << boxa.getLength() << "\n";
  std::cout << boxa.getBreadth() << "\n";
  std::cout << boxa.getHeight() << "\n";
  std::cout << boxa.CalculateVolume() << "\n";
  std::cout << (boxa < boxb) << "\n";
  std::cout << boxa;
  return 0;
}
  

