//A code to display the access modifying in C++
//remove the comments to see the errors in below code--

#include <iostream>

using namespace std;

class Demo{
    private: int a;
    protected: int b;
    public: int c;

    void set(){
        a=10;
        b=20;
        c=30;
    }
    void show(){
        cout<<"Inside show function in Demo class\n"<<a<<"\n"<<b<<"\n"<<c<<endl;
    }
};

class Child : public Demo{
    public :
        void access(){
            //a=10;
            b=20;
            c=30;
        }
};

int main(){
    Demo d;
    d.set();
    d.show();
    //d.a=50;
    //d.b=100;
    d.c=150;
    cout<<d.c;
}