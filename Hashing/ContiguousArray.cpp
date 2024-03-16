// https://leetcode.com/problems/contiguous-array/description/

class Solution {
public:
    int findMaxLength(vector<int>& n) {
        int sum=0,maxl=0;
        int len=n.size();
        unordered_map<int,int>mp;
        for (int i=0;i<len;i++ )
        {
            sum+=n[i] ==0 ? -1: 1;
            if(sum==0)
                maxl=i+1;
            else if(mp.find(sum)!=mp.end())
                maxl=max(maxl, i-mp[sum]);
            else 
                mp[sum]=i;
        }
        return maxl;
    }
};
