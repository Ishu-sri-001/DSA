// https://leetcode.com/problems/length-of-last-word/description/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ' && ans==0)
                continue;
            if(s[i]==' ')
                return ans;
            else
                ans++;
        }
        return ans;
    }
};
