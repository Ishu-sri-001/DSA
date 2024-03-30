// https://leetcode.com/problems/subarrays-with-k-different-integers/description/

class Solution {
public:
    int atMostK(vector<int>& n, int k)
    {
        unordered_map<int,int>mp;
        int len=n.size(),count=0;
        int left=0,right=0;
        while(left<len && right<len)
        {
            mp[n[right]]++;
            while(mp.size()>k)
            {
                mp[n[left]]--;
                if(mp[n[left]]==0)
                    mp.erase(n[left]);
                left++;
            }
            count+=(right-left+1);
            right++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& n, int k) {
        return atMostK(n,k)-atMostK(n,k-1);
    }
};
