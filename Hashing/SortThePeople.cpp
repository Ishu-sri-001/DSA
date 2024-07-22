// https://leetcode.com/problems/sort-the-people/description/

class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        unordered_map<int,string>mp;
        int len=n.size();
        for(int i=0;i<len;i++)
        {
            mp[h[i]]=n[i];
        }
        sort(h.begin(),h.end());
        reverse(h.begin(),h.end());
        for(int i=0;i<len;i++)
        {
            n[i]=mp[h[i]];
        }
        return n;
    }
};
