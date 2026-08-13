#include<iostream>
using namespace std;

class Student{

public:
	int *roll;
	Student(int x) {
		roll = new int(x);
	}
	
	~Student(){
		
		delete roll;

		cout<<"HAHA Suckers deleted the memory address to out pretty little address."<<endl;
		
	}

	void getRoll(){
		cout<<*(roll)<<endl;
	}


};


int main() {

	Student s1(5);
	
	s1.getRoll();

	return 0;

}

