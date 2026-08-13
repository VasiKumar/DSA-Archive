#include<iostream>

using namespace std;

class Y; //forward declaration

class X {
    private:
        int a=5;
        friend class Y;
};

class Y{
    public:
        void show(X obj){
            cout<<obj.a<<endl;
        }
};

int main( ){
    X x;
    Y y;
    y.show(x);
    return 0;
}