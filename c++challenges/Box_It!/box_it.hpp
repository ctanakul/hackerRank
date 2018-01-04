#ifndef BOX_IT_H
#define BOX_IT_H

class Box {
private:
  int l = 0; //length
  int b = 0; //breadth
  int h = 0; //height
  
public:
  Box(int len, int bre, int hei):l(len), b(bre), h(hei) {}
  Box(const Box& box_old) {l = box_old.l; b = box_old.b; h = box_old.h;}
  int getLength();
  int getBreadth();
  int getHeight();
  long long CalculateVolume();
  
};


#endif
