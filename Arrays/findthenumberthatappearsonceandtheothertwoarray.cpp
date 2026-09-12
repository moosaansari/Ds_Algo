#include <bits/stdc++.h>
using namespace std;
class Solution{    
public:    
    int singleNumber(vector<int>& nums){
        int xor1 =0;
        for(int i=0;i<nums.size();i++){
            xor1 =xor1^nums[i];
        }
        return xor1;
    }
};
int main(){
    vector<int> nums{1,1,2,3,3,4,4};
    Solution s;
    int result = s.singleNumber(nums);
    cout<<"The Result is: "<<result;
    return 0;
}