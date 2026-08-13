#include<iostream>

using namespace std;

int main() {

	int arr[3] = {10,20,30};

	for(int i = 0; i<3 ;  i++)
	{
		
		cout<<arr[i]<<endl;

	}

	cout<<"Address of index 0 : "<<endl;
	cout<<&arr<<endl;
	
	cout<<"Address of index 0 : "<<endl;
	cout<<&arr[0]<<endl;
	
	cout<<arr+1<<endl;

	cout<<&arr+1<<endl;

	return 0;

}