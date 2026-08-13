#include<iostream>

using namespace std;

int main(){

	int x=10;
	int* ptr= &x;
	
	cout<<"x using pointer : "<<*ptr<<endl;
	cout<<"Address of x : "<<ptr<<endl;
	cout<<"pointer address : "<<&ptr;

	return 0;
}