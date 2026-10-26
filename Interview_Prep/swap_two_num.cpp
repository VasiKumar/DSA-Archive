#include<iostream>
using namespace std;


void swap(int *a, int *b){
    int temp= *a;
    *a=*b;
    *b= temp;
}
int main() {
    int n= 5;
    int c= 1;
    swap(&n,&c);
    cout<< n<<" "<<c;
    return 0;
}