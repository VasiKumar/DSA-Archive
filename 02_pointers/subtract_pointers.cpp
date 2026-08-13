//Addition of two pointer is not allowed in CPP ptr1+pt2 ❌not allowed
//But substraction is allowed ptr1-ptr2 Yo chill ✔️


#include<iostream>
#include<vector>

using namespace std;

int main(){

    int a=10;
    int b=11;

    int *ptr1 =&a;
    int *ptr2=&b;
    
    int v=ptr2-ptr1;

    cout<<"Value of ptr2 = "<<ptr2<<endl;
    cout<<"Value of ptr1 = "<<ptr1<<endl;

    cout<<v<<endl;

    
    return 0;
}