#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main() {
    string n= "110";
    int p=0;
    int power=0;
    for(int i=n.length()-1; i>=0;i--){
        if (n[i]== '1'){
            p=p + pow(2,power);
        }
        power++;
    }

    cout<<p<<endl;
}

