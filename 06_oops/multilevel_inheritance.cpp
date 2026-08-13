#include<iostream>
#include<string>

using namespace std;

class Organism {

    public :
        string breath;

};

class Bird : public Organism{
    public :
        string fly;

};


class Sparrow : public Bird{
    public:
        string colour;

};


int main() {

    Sparrow s;
    s.fly="Yes";
    s.breath ="Yes";
    s.colour= "Yellow";

    cout<<"Can it fly  = "<<s.fly<<endl;
    cout<<"Can it breath  = "<<s.breath<<endl;
    cout<<"Colour is  = "<<s.colour<<endl;
    
    return 0;
}
