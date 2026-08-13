#include<iostream>
#include<vector>

using namespace std;

int main() {

    //vector<int> vec={3,2,4}; 3 and 3 answer

    vector<int> vec;

    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(5);
//gives 3 and 4 answer. iNcreased the capacity as using push back happened at runtime triggered the dynamic memory allocation.
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl; 

    return 0;

}