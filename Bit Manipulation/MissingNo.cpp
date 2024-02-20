// https://leetcode.com/problems/missing-number/description/

class Solution {
public:
    int missingNumber(vector<int>& n) {
        int ans=0;
        for (int i=1;i<=n.size();i++)
            ans^=i;
        for (int i=0;i<n.size();i++)
            ans^=n[i];
        return ans;
    }
};
