// https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/description/?envType=daily-question&envId=2024-07-11

class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            if(s[i]==')')
            {
                string t="";
                while(st.top()!='(')
                {
                    t+=st.top();
                    st.pop();
                }
                st.pop();
                for (int j=0;j<t.size();j++)
                {
                    st.push(t[j]);
                }
            }
            else 
            {
                st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
