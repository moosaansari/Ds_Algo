#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int> a, vector<int> b) {
        int n1 = a.size();
        int n2 = b.size();

        int i = 0;
        int j = 0;

        vector<int> unionarr;

        while (i < n1 && j < n2) {

            if (a[i] <= b[j]) {
                if (unionarr.size() == 0 || unionarr.back() != a[i]) {
                    unionarr.push_back(a[i]);
                }
                i++;
            }
            else {
                if (unionarr.size() == 0 || unionarr.back() != b[j]) {
                    unionarr.push_back(b[j]);
                }
                j++;
            }
        }

        while (j < n2) {
            if (unionarr.size() == 0 || unionarr.back() != b[j]) {
                unionarr.push_back(b[j]);
            }
            j++;
        }

        while (i < n1) {
            if (unionarr.size() == 0 || unionarr.back() != a[i]) {
                unionarr.push_back(a[i]);
            }
            i++;
        }

        return unionarr;
    }
};