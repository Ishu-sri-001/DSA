// https://leetcode.com/problems/sliding-window-maximum/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& n, int k) {
        deque<int>dq;
        vector<int>ans;
        int i;
        for (i=0;i<k;i++)
        {
            while(!dq.empty() && n[i]>=n[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        for (;i<n.size();i++)
        {
            ans.push_back(n[dq.front()]);
            while(!dq.empty() && dq.front()<=i-k)
                dq.pop_front();
            while(!dq.empty() && n[i]>=n[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        ans.push_back(n[dq.front()]);
        return ans;
    }
};
