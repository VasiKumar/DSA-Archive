//alias use karne se name simply 2 chij ek chij ko point karenge
//jaise iron main aur tony stark ek ko point karte h. 
//waise he &b use karte h for giving new name to point at the same location.

#include<iostream>
#include<vector>

using namespace std;

void changeA(int &b){ //Pass by alias
    b=10;
}
int main(){

    int a = 5;

    changeA(a);

    cout<<"Change after using the alias: "<<a<<endl;
    return 0;
}