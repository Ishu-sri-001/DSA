// https://leetcode.com/problems/trapping-rain-water/description/

class Solution {
public:
    int trap(vector<int>& h) 
    {
        int n=h.size();
        vector<int>left(n);
        vector<int>right(n);
        left[0]=h[0];
        for (int i=1;i<h.size();i++)
        {
            left[i]=max(left[i-1],h[i]);
        }
        right[n-1]=h[n-1];
        for (int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],h[i]);
        }
        int c=0;
        for (int i=0;i<h.size();i++)
        {
            c+=min(left[i],right[i])-h[i];
        }
        return c;
    }
};
