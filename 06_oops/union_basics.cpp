#include <iostream>
using namespace std;


union money {
    int rice;
    char car;
    float pounds;
};

int main(){
    union money m1;
    m1.rice =34;
    //m1.car='c'; //gives a garbage value for rice if you use multiple instances of union at once.
    //Note :  if you print rice it will give correct value as car value is updated. From line before.memory is getting shared.
    cout<<m1.rice<<endl;
    return 0;
}
