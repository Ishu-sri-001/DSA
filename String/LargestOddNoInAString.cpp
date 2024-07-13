// https://leetcode.com/problems/largest-odd-number-in-string/description/

class Solution {
public:
    string largestOddNumber(string n) {
        int l=n.size();
        for(int i=l-1;i>=0;i--)
        {
            if((n[i]-'0') %2 !=0)
                return n.substr(0,i+1);
        }
        return "";
    }
};
