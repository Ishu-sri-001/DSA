// https://leetcode.com/problems/maximum-distance-in-arrays/description/

class Solution {
public:
    int maxDistance(vector<vector<int>>& a) {
        int minVal= a[0][0];
        int maxVal= a[0].back();
        int l=a.size();
        int ans=0;
        for (int i=1;i<l;i++)
        {
            int cMin=a[i][0];
            int cMax=a[i].back();
            ans= max(ans,abs(cMax-minVal));
            ans=max(ans,abs(maxVal-cMin));
            minVal=min(minVal,cMin);
            maxVal=max(maxVal,cMax);
        }
        return ans;
    }
};
