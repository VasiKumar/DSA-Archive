#include<iostream>

using namespace std;

void swap(int *a , int *b) {

	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;

}

int main() {

	int m=3;
	int n=5;

	cout<<"Value of m : \n"<<m<<endl;
	cout<<"Value of n : \n"<<n<< endl;

	swap(&m , &n);

	cout<<"Value of m : \n"<<m<<endl;
	cout<<"Value of n : \n"<<n<< endl;

	return 0;
}
