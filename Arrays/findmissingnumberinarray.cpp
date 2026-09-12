#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums, int n)
    {
        int xor1 = 0;
        int xor2 = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            xor2 = xor2 ^ nums[i];
            xor1 = xor1 ^ (i + 1);
        }
        xor1 = xor1 ^ n;
        return xor1 ^ xor2;
    }
};
int main()
{
    int n = 5;
    vector<int> nums = {1, 2, 4, 5};
    Solution s;
    int missing = s.missingNumber(nums, n);
    cout << "The Missing Number is: " << missing;
}