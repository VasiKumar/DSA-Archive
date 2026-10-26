#include<iostream>
#include<string>

using namespace std;

class Student{
public:
    string name;
    int age;

    void print(){
        cout<<name<<" "<<age<<endl;
    }
};

int main() {
    Student s;
    s.name= "Besan";
    s.age=10;
    s.print();
}