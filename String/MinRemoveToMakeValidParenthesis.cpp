// https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/description/

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int open=0,close=0, ratio=0;
        for(char ch: s)
        {
            if(ch=='(')
            {
                open++;
                ratio++;
            }
            else if(ch==')' && ratio>0)
            {
                close++;
                ratio--;
            }
        }
        int k=min(close,open);
        open=k;
        close=k;
        string ans="";
        for(char ch:s)
        {
            if(ch=='(')
            {
                if(open>0)
                {
                    ans+='(';
                    open--;
                }
                else
                    continue;
            }
            else if(ch==')')
            {
                if(close>0 && close>open)
                {
                    ans+=')';
                    close--;
                }
                else
                    continue;
            }
            else
                ans+=ch;
        }
        return ans;
    }
};
