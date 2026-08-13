#include<iostream>

using namespace std;

class Student{

public:

	string name;

	int roll;

	int sem;

};

int main() {

	Student s1 ;

	s1.roll = 01;

	s1.name= "Basistha Mohanta";

	s1.sem=6;

	cout<<s1.name<<endl;

	cout<<s1.roll<<endl;

	cout<<s1.sem<<endl;

	return 0;

}