// https://leetcode.com/problems/kth-largest-element-in-an-array/

class Solution {
public:
    int findKthLargest(vector<int>& n, int k) {
        priority_queue<int>pq;
        for (int i=0;i<k;i++)
            pq.push(-n[i]);
        for (int i=k;i<n.size();i++)
        {
            if(n[i]>-pq.top())
            {
                pq.pop();
                pq.push(-n[i]);
            }
        }
        return -pq.top();
    }
};
