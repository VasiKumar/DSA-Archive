#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    string strr;
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while(n>0){
        if(n%2==0){
            n=n/2;
            strr.append("0");
        }
        else if (n%2==1)
        {
            n=n/2;
            strr.append("1");
        }
        
    }
    reverse(strr.begin(),strr.end());
    cout<<strr<<endl;
    return 0;
}