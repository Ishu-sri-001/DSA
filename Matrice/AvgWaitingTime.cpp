// https://leetcode.com/problems/average-waiting-time/description/

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        long res=0;
        int time=c[0][0];
        int len=c.size();
        for (int i=0;i<len;i++)
        {
            time=max(time,c[i][0]);
            time+=c[i][1];
            res+=(time-c[i][0]);
        }
        double ans=(double)res/len;
        return ans;
    }
};
