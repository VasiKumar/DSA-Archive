#include<iostream>
#include<vector>

using namespace std;

int main(){

    char* pGrade=NULL;
    int size;

    cout<<"Enter the number of subjects : ";
    cin>>size;

    pGrade = new char[size];

    for(int i =0; i<size;i++){
        cout<<"Enter the grade for subject "<<i+1<<endl;
        cin>>pGrade[i];
    }

    cout<<"Grades:"<<endl;

    for(int i=0; i<size;i++){
        cout<<pGrade[i]<<"\n";
    }

    delete[] pGrade;
    return 0;
}