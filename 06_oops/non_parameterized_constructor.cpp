#include<iostream>
#include<string>
using namespace std;


class Teacher {
private:
	double salary;

public:

	
	//Parameterized
	Teacher(string n , string d , string s , double sal) {
		name = n;
		dept = d;
		subject = s;
		salary = sal;
	}
	
	string name;
	string dept;
	string subject;

	void changeDept(string newDept) {
		dept=newDept;
	}


	void getInfo() {
		cout<< "name : " <<name <<endl;
		cout<< "subject : "<< subject <<endl;
	}
};


class Account {
private:
	double balance;
	string password; //data hiding 

public:
	string accountId;
	string username;
	
};

int main() {
	
	Teacher t1("BASI","CSE","C++", 25000);
	t1.getInfo();



	return 0;
}