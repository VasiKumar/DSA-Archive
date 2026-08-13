#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> TwoSum(vector<int> &numbers,  int target){
        int n = numbers.size();
        int l=0;
        int r = n-1;

        while(l<r){
            int sum = numbers[l] + numbers[r];
            if (sum == target){
                vector<int> ans;
                ans.push_back(l);
                ans.push_back(r);
                return ans;
            }
            else if(sum<target){
                l++;
            }
            else{
                r--;
            }
        }
        return {};
    }
};

int main() {
    Solution obj;

    vector<int> nums ={2,7,11,15};
    int target = 9;

    vector<int> result = obj.TwoSum(nums, target);
    cout<<"indices: ";
    for(int x:result){
        cout<<x<<" ";
    }
    return 0;
}