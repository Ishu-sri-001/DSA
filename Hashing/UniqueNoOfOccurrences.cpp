// https://leetcode.com/problems/unique-number-of-occurrences/description/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& a) {
        unordered_map<int,int>mp;
        unordered_set<int>st;
        for (const auto& c:a)
            mp[c]++;
        for (const auto& i:mp)
        {
            int t=i.second;
            if(st.count(t)!=0)
                return false;
            st.insert(t);
        }
        return true;
    }
};
