#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int n = nums.size();
        int temp =nums[0];
        for(int i = 1 ; i<n; i++){
            nums[i-1]=nums[i];
        }
        nums[n-1] = temp;
    }
};
int main(){
    Solution s;
    vector<int> nums={1 ,2,3,4,5};
    s.rotateArrayByOne(nums);
    for(int i : nums) {
        cout << i << " ";
    }

    return 0;
}