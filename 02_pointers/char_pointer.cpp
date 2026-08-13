#include<iostream>
using namespace std;

int main () {
    char a = 'A';
    char *ptr = &a;

    // Cast to void* to force printing the address
    cout << ptr << endl;

    ptr++;

    cout << ptr << endl;

    return 0;
}