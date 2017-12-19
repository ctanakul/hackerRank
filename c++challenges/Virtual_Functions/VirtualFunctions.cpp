#include "VirtualFunctions.hpp"
#include <iostream>


int Person::count_id_stu = 1;
int Person::count_id_prof = 1;

void Professor::getdata()
{
  std::cin >> name >> age >> publications;
  cur_id = count_id_stu;		
  count_id_stu++;
}

void Professor::putdata()
{
  std::cout << name << " " << age << " " << publications << " " << cur_id << "\n"; 
}

void Student::getdata()
{
  std::cin >> name >> age;
  int i = 0;
  for(i = 0; i < 6; i++)
    {std::cin >> marks[i];}
  cur_id = count_id_prof;
  count_id_prof++;
}

void Student::putdata()
{
  int i, sum = 0;
  for(i = 0; i < 6; i++)
    {sum += marks[i];}
  std::cout << name << " " << age << " " << sum << " " << cur_id << "\n"; 
}


int main() {
  int n, val;
  std::cin>>n; //The number of objects that is going to be created.
  Person *per[n];

  for(int i = 0;i < n;i++){

    std::cin>>val;
    if(val == 1){
      // If val is 1 current object is of type Professor
      per[i] = new Professor;

    }
    else per[i] = new Student; // Else the current object is of type Student

    per[i]->getdata(); // Get the data from the user.

  }

  for(int i=0;i<n;i++)
    per[i]->putdata(); // Print the required output for each object.

  return 0;
}
