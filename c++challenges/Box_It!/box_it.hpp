#ifndef BOX_IT_H
#define BOX_IT_H

#include <iostream>

class Box {
private:
  int l = 0; //length
  int b = 0; //breadth
  long h = 0; //height //long not int otherwise calculate volume of (1039, 3749, 8473) will be negative
  
public:
  Box(){};
  Box(int len, int bre, int hei):l(len), b(bre), h(hei) {}
  Box(const Box& box_old) {l = box_old.l; b = box_old.b; h = box_old.h;}
  bool operator<(const Box&);
  friend std::ostream& operator<<(std::ostream&, const Box&);
  int getLength();
  int getBreadth();
  int getHeight();
  long long CalculateVolume();
  
};


#endif
