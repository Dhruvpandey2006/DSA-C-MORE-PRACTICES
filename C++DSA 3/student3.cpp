class Student{
public:
    int age;
    const int rollNumber;
    int &X; /// age reference variable


    Student(int r, int age): rollNumber(r), age(age), X(this->age){
    ///  rollNumber = r;
    }
};
