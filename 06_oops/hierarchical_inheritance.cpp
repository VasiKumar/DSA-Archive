#include<iostream>
#include<string>

using namespace std;

class Namak {
public:
    int sour;


};

class Sodium : public Namak{
public:
    int blast;
};

class Chlorine : public Namak{
public:
    int waterClean;
};

int main() {

    Sodium Na;

    Na.blast = 1;
    Na.sour = 1;

    Chlorine Cl;
    Cl.waterClean = 0;
    Cl.sour = 0;

    cout<<Na.blast <<endl;
    cout<<Na.sour<<endl;
    cout<<Cl.sour<<endl;

return 0;

}