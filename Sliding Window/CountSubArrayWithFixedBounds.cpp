// https://leetcode.com/problems/count-subarrays-with-fixed-bounds/description/

class Solution {
public:
    long long countSubarrays(vector<int>& n, int minK, int maxK) {
        int minI=-1, maxI=-1,left=-1,right=0,len=n.size();
        long long count =0;
        while(right<len)
        {
            if(n[right]<minK || n[right]> maxK)
            {
                minI=right;
                maxI=right;
                left=right;
            }
            minI= n[right]==minK ? right :minI;
            maxI= n[right]==maxK ? right :maxI;
            count+=min(minI,maxI)-left;
            right++;
        }
        return count;
    }
};
