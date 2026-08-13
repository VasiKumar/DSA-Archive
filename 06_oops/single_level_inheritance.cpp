#include<iostream>
#include<string>

using namespace std;

class Person{
public:
    int age ;

    string name;

};


class Student : public Person {
public:
    int rollno ;

};

int main() {

    Student s1 ;

    s1.name = " Basistha";

    cout<<s1.name<<endl;
    return 0;
}