#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x=0;

    vector <int> vec ={1, 2, 3, 5};

    int n=vec.size();
    for(int i = 0; i<=5; i++){
        x^=i;
    }
    
    for(auto i : vec){
        x^=i;
    }
    cout<<x<<endl;
}