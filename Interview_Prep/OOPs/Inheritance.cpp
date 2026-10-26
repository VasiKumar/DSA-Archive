#include<iostream>
#include<string>
using namespace std;

class Bio {
public:
    int classs=7;
};

class Student: public Bio {
public:
    string name="Vasi";
};
int main() {
    Student s;
    cout<<s.classs<<endl;


}