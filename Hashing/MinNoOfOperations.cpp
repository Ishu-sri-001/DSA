// https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/description/

class Solution {
public:
    int minimumOperations(vector<int>& n) {
        int len=n.size();
        unordered_map<int,int>mp;
        for (int i=len-1;i>=0;i--)
        {
            if(mp.find(n[i])!=mp.end())
            {
                return (i+3)/3;
            }
            mp[n[i]]++;
        }
        return 0;
    }
};
