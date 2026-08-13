#include<iostream>

using namespace std;

int main() {

	int x= 50;
	int *p=&x;
	int **pp =&p;
	
	cout<<"Printing x using **pp : " <<endl;
	cout<<**pp<<endl;

	cout<<"Print address of x using *pp : \n"<<*pp<<endl;

	cout<<"Using &x : "<<&x<<endl;

	return 0;

}