#include<iostream>

using namespace std;

int main()  {

	int *p =new int;

	int a=10;

	p=&a;

	cout<<*p<<endl;

	delete[] p;

	return 0;

}