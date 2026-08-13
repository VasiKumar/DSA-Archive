#include<iostream>
#include<vector>

using namespace std;

int main(){

    int *pNum=NULL;

    pNum = new int ;

    *pNum=20;

    cout<<"Address : "<<pNum<<endl;
    cout<<"Value : "<<*pNum<<endl;

    delete pNum;

    return 0;
}