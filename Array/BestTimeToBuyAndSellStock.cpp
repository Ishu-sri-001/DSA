// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& p) {
        int maxP=0;
        int mini=p[0];
        for (int i=1;i<p.size();i++)
        {
            mini=min(mini,p[i]);
            maxP= max(maxP,p[i]-mini);
        }
        return maxP;
    }
};
