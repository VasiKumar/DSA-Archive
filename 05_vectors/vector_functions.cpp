#include<iostream>
#include<vector>

using namespace std;

int main() {

    vector<int> vec ={2,4,5};

    cout<<"Vector size before the push_back : "<<vec.size()<<endl;

    vec.push_back(50);

    cout<<"Vector size after push_back : "<<vec.size()<<endl;

    for(int i :vec){
        cout<<"Vector :"<< i<<endl;

    }

    cout<<"Vector size after pop_back : "<<vec.size()<<endl;
    vec.pop_back();

    for(int i :vec){
        cout<<"Vector :"<< i<<endl;

    }

    cout<<"Front value of the vector : "<<endl;
    cout<<vec.front()<<endl;

    cout<<"Back value of the vector : "<<endl;
    cout<<vec.back()<<endl;

    cout<<"Value at 2nd position : "<<endl;
    cout<<vec.at(1)<<endl;

    return 0;

}