// https://leetcode.com/problems/isomorphic-strings/description/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>st, ts;
        int l=s.size();
        for(int i=0;i<l;i++)
        {
            if(st.find(s[i])==st.end() && ts.find(t[i])==ts.end())
            {
                st[s[i]]=t[i];
                ts[t[i]]=s[i];
                continue;
            }
            if(st[s[i]]!=t[i] || ts[t[i]!=s[i]] )
            {
                return false;
            }
        }
        return true;
    }
};
