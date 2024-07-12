// https://leetcode.com/problems/xor-queries-of-a-subarray/description/

// Approach 1

class Solution {
public:
    vector<int> xorQueries(vector<int>& a, vector<vector<int>>& q) {
        vector<int>ans;
        int len=q.size();
        for(int i=0;i<len;i++)
        {
            int left=q[i][0];
            int right=q[i][1];
            int xr=0;
            while(left<=right)
            {
                xr^=a[left];
                left++;
            }
            ans.push_back(xr);
        }
        return ans;
    }
};


// Approach 2 (Optimal one)

class Solution {
public:
    vector<int> xorQueries(vector<int>& a, vector<vector<int>>& q) {
        vector<int>ans;
        int len=q.size();
        for(int i=1;i<a.size();i++)
        {
            a[i]^=a[i-1];
        }
        for(int i=0;i<len;i++)
        {
            if(q[i][0]==0)
                ans.push_back(a[q[i][1]]);
            else
                ans.push_back(a[q[i][0]-1]^a[q[i][1]]);
        }
        return ans;
    }
};
