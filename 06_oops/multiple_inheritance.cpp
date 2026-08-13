#include<iostream>
#include<string>

using namespace std;

class Student{
public:
    string name;
    int rollno;
};

class Teacher {
public:
    int salary;
};

class TA: public Student, public Teacher{
public:
    int research;
};

int main() {
    TA t;

    t.salary = 15000;
    t.name = "Raj";
    t.rollno = 50;
    t.research = 7;

    cout<<t.salary<<endl;
    cout<<t.name<<endl;
    cout<<t.rollno<<endl;
    cout<<t.research<<endl;
return 0;
}