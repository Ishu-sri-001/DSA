// https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition/description/?envType=daily-question&envId=2025-04-27

class Solution {
public:
    int countSubarrays(vector<int>& n) {
        int len=n.size();
        int ans=0;
        for (int i=0;i<len-2;i++)
        {
            if(2*(n[i]+n[i+2])==n[i+1])
                ans++;
        }
        return ans;
    }
};
