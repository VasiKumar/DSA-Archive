#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string binary;
    int p=1;
    int decimal=0;
    cout<<"Enter a binary number"<<endl;
    cin>>binary;
    int n= binary.size();

    for(int i= n-1;i>=0;i--){
        if(binary[i] == '1'){
            decimal=decimal+p;
        }
        p=p*2;
    }
    cout<<decimal<<endl;
}