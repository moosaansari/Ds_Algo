#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int linearsearch(vector<int> &nums,int n){
        for(int i =0;i<n;i++){
            if(nums[i]==n){
                return i;
            }
        }
        return -1;
    }
};
