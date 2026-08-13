#include<iostream>
#include<vector>

using namespace std;

int main(){
    int nums[5]={1,2,3,2,1};
    int key=0;
    
    for (int j=0;j<sizeof(nums)/sizeof(nums[0]); j++){
        key=nums[j];
        int count=0;

        for (int i=0; i<sizeof(nums)/sizeof(nums[0]); i++){
            
            if(key==nums[i] && i!=j){
                count++;
                break;
            }
        }

        if(count==0){
            cout<<"Unique :"<<key<<endl;
        }

    }
    return 0;
}