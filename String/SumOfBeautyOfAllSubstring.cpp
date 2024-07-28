// https://leetcode.com/problems/sum-of-beauty-of-all-substrings/description/

class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            map<char,int>mp;
            for(int j=i;j<len;j++)
            {
                mp[s[j]]++;
                int least=INT_MAX;
                int most=INT_MIN;
                for(auto it:mp)
                {
                    least=min(least,it.second);
                    most=max(most,it.second);
                }
                ans+=most-least;
            }
        }
        return ans;
    }
};
