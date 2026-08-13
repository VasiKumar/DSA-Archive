#include<iostream>

using namespace std;

int main(){
    enum Meal {breakfast,lunch,dinner};
    Meal m1 =breakfast;
    cout<<m1;
    cout<<(m1==0);
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;
    return 0;
}
//Gives the number index to the value breakfast =>0, lunch =>1, ...so on