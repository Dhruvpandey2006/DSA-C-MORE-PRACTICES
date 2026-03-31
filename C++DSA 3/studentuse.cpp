#include<iostream>
#include "student.cpp"
using namespace std;

int main(){
   // creating objects statically
 student s1;
 student s2;
 student s3,s4,s5;

    // creating objects dynamically
    // for dynamically created objects we use derefrence operator

  student *s6 = new student;
  student *s7 = new student;
  student *s8 = new student;
  student *s9 = new student;
  student *s10 = new student;

  //s1.age = 24;
  s1.rollNumber = 100;

  s1.display();
  s2.display();

  cout<<"s1 age :"<<s1.getAge()<<endl;
  cout<<"s2 age :"<<s2.getAge()<<endl;


 // cout<<s1.age<<endl;
  cout<<s1.rollNumber<<endl;

  // The given below statement are exactly same
  //(*s6).age = 23;
  (*s6).rollNumber = 30;
  (*s6).display();
  cout<<"s6 age: "<<(*s6).getAge()<<endl;

 // s7->age = 26;
  s7->rollNumber = 31;
  s7->display();
  cout<<"s7 age:"<<s7->getAge()<<endl;

  return 0;
}
