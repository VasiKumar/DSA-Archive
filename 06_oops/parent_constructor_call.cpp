#include<iostream>
#include<string>

using namespace std;


class Person{
public:
    int age ;

    string name;

    Person() {

    }
    Person(int age, string name){
        this->name = name;
        this->age = age;

    }
};

class Student : public Person{
public:

    int rollno;

    Student(int age, string name,int rollno ) : Person(age, name){
        this->rollno = rollno;
    }


    void getInfo() {
        cout<<age<<endl;
        cout<<name<<endl;
        cout<<rollno<<endl;
    }
};



int main() {

    Student s1(21,"Basistha Mohanta", 34);
    s1.getInfo();

return 0;

}