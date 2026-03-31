class Student {
   public:
   int rollNumber;
   int age;
   static int totalStudents; /// total number of students present

   Student(){
      totalStudents++;
   }

   int getrollNumber(){
    return rollNumber;
   }

   static int gettotalStudents(){
     return totalStudents;
   }


};
 int Student::totalStudents = 0; /// initialize static data members
