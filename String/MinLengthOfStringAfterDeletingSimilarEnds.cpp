// https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/description/

class Solution {
public:
    int minimumLength(string s) {
        int l=0;
        int r=s.size()-1;
        while(l<r && s[l]==s[r])
        {
            char ch=s[l];
            while(l<=r && s[l]==ch)
                l++;
            while(l<=r && s[r]==ch)
                r--;
        }
        return r-l+1;
    }
};
