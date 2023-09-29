// https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& n, int k) {
        unordered_map<int,int>mp;
        int c=0;;
        int curSum=0;
        mp[0]=1;
        for (int i=0;i<n.size();i++) 
        {
            curSum+=n[i];
            if(mp.count(curSum-k)>0)
                c+=mp[curSum-k];
            mp[curSum]++;
        }
        return c;
    }
};
