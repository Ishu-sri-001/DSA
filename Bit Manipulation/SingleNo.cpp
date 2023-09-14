// https://leetcode.com/problems/single-number/description/

class Solution {
public:
    int singleNumber(vector<int>& n) {
        int ans=0;
        for (auto i:n)
            ans^=i;
        return ans;
    }
};
