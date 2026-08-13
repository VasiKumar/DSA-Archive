#include<iostream>
#include<string>
using namespace std;


class Teacher {
private:
	double salary;

public:

	//Non-parameterized
	Teacher() {
		dept= "Computer science";
		cout<<"Hi, I am Vasistha\n";
	}

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


	void setSalary(double s) {
		salary = s;
	}

	double getSalary() {
		return salary;
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
	Teacher t1;
	t1.name = "Basistha";
	t1.subject = "C++";
	//t1.dept ="Computer Science";

	t1.setSalary(5000);

	cout<<t1.dept<<endl;
	cout<<t1.getSalary()<<endl;

	return 0;
}