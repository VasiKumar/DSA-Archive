#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
    virtual void characteristic(){
        cout<<"Animal has legs"<<endl;
    }
};
class Dog: public Animal{
public:
    void characteristic() override{
        cout<<"Dog barks"<<endl;
    }
};

int main() {
    Dog d;
    d.characteristic();
}