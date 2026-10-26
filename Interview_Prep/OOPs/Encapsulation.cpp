#include<iostream>
using namespace std;

class Encapsulate{
private:
    int Pin=101;
public:
    int getPin(){
        return Pin;
    }
};
int main() {
   Encapsulate e;
   cout<<e.getPin();
   return 0; 
}