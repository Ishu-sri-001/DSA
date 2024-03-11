// https://leetcode.com/problems/custom-sort-string/description/

class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        unordered_map<char,int>mp;
        for (auto i:s)
            mp[i]++;
        for(auto i:order)
        {
            if(mp.find(i)!=mp.end())
                ans.append(mp[i],i);
            mp.erase(i);
        }
        for (auto i:mp)
            ans.append(i.second,i.first);
        return ans;
    }
};
