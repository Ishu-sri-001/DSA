// https://leetcode.com/problems/rank-transform-of-an-array/description/

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& a) {
        unordered_map<int,int>mp;
        vector<int>t=a;
        sort(t.begin(),t.end());
        t.erase(unique(t.begin(),t.end()), t.end());
        for(int i=0;i<t.size();i++)
        {
            mp[t[i]]=i+1;
        }
        for(int i=0;i<a.size();i++)
        {
            a[i]=mp[a[i]];
        }
        return a;
    }
};
