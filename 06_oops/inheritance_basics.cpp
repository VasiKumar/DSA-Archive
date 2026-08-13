#include<iostream>
#include<string>


using namespace std;

class Person {

public:


		string name;

		int age;


};


class Student : public Person {
public:

		int rollno;
	

};



int main() {

	Student s1;

	s1.name= "Basistha Mohanta";
	s1.age= 21;
	s1.rollno = 34;

cout<<s1.name<<endl;
cout<<s1.age<<endl;
cout<<s1.rollno<<endl;
return 0;

}
