// https://leetcode.com/problems/subsets/

class Solution {
public:
vector<vector<int>>ans;
    void sub(vector<int>&num,int i,vector<int>t)
    {
        if(i==num.size())
        {
            ans.push_back(t);
            return;
        }

        sub(num,i+1,t);
        t.push_back(num[i]);
        sub(num,i+1,t);
    }
    vector<vector<int>> subsets(vector<int>& n) {
        vector<int>t;
        sub(n,0,t);
        return ans;
    }
};
