#include<iostream>
using namespace std;

int main() {
    int a=10;
    int b=20;

    int &r=a;

    r=r+100;
    cout<<r<<endl<<a<<endl;
}