#include<iostream>
#include<string>
using namespace std;

class price{
public:
    int calculate(int x, int y){
        int mul=x*y;
        return mul;
    }

    double calculate(double x, double y){
        double mul=x*y;
        return mul;
    }
};

int main() {
    price p;
    cout<<p.calculate(5,1)<<endl;
    cout<<(p.calculate(3.5,7.3))<<endl;
}