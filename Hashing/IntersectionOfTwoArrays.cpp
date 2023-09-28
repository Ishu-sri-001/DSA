// https://leetcode.com/problems/intersection-of-two-arrays/

class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) 
    {
        vector<int>ans;
        unordered_set<int>st;
        for (auto c:n1)
            st.insert(c);
        for (auto c:n2)
        {
            if(st.count(c)==1)
            {
                ans.push_back(c);
                st.erase(c);
            }
        }    
        return ans;
    }
};
