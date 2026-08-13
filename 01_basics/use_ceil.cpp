#include<iostream>
#include <cmath>

using namespace std;

int main() {
	/*
	T->Total no. of test cases
	N->number of friends
	X->ost of one subscription
	*/
	
    int T,X;
    float N;

    cin>>T;
    
    while(T--){
        cin>>N>>X;
        int G= ceil(N/6);
        cout<<"---------"<<endl;
        cout<<G<<endl;
        cout<<"---------"<<endl;
        cout<<X*G<<endl;

        }
        
    }

