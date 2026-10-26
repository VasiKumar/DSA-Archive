#include<iostream>
using namespace std;

class Shape{
public:
    virtual void draw() = 0;
};

class Circle: public Shape{
public:
    void draw() override {
        cout<<"Circle has 0 corners"<<endl;
    }
};
int main() {
    Circle c;
    c.draw();
}