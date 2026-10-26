#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    int n= 50;
    string p= "";
    while(n>0){
        if(n % 2 == 0){
            n = n / 2;
            p.push_back('0');
        }
        else if(n%2 == 1){
            n=n/2;
            p.push_back('1');
        }
    }
    reverse(p.begin(),p.end());
    cout<<p;
    return 0;
}