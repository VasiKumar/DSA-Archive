#include<iostream>

using namespace std;

int main() {

	int arr[5] = {10,62,3,4,5};
	
	int *ptr = arr;
	
	cout<<"First index : "<<endl;
	cout<<*ptr<<endl;
	
	ptr++;
	
	cout<<"Second index : "<<endl;
	cout<<*ptr<<endl;

	ptr++;

	cout<<"Third index : "<<endl;
	cout<<*ptr<<endl;

	ptr++;

	cout<<"Fourth index : "<<endl;
	cout<<*ptr<<endl;

	ptr++;

	cout<<"Fifth index : "<<endl;
	cout<<*ptr<<endl;

	return 0;

}
