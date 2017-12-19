#ifndef VIRTUAL_FUNCTION_H
#define VIRTUAL_FUNCTION_H

#include <string>

class Person {
protected:
  std::string name;
  int age;

public:
  virtual void getdata() = 0;
  virtual void putdata() = 0;
  static int count_id_stu, count_id_prof;
};

class Professor : public Person {
protected:
  int publications;
  int cur_id;
  void getdata();
  void putdata();
};

class Student : public Person {
protected:
  int marks[6];
  int cur_id;
  void getdata();
  void putdata();
};

#endif
