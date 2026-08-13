#include<iostream>
#include<vector>

using namespace std;

void changeA(int* ptr){ //pass by referance using pointer
    *ptr=20;
}
int main(){

    int a = 5;

    changeA(&a);
    cout<<"Value after calling func : "<<a<<endl; //20

    return 0;
}