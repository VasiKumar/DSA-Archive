#include<iostream>
#include<vector>

using namespace std;

//for leetcode just the below->
class Solution{
    
    public:
    int singleNumber(vector<int>& nums){
        int ans=0;

        for(int val : nums){
            ans ^=val;
        }
        return ans;
    }
};

int main() {
    Solution sol; // Object banaya
    vector<int> v = {1, 2, 3, 2, 1};

    // Yahan spelling check karein: singleNumber
    int result = sol.singleNumber(v); 

    cout << "The unique number is: " << result << endl;

    return 0;
}