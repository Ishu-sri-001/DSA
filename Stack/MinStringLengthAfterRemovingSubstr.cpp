// https://leetcode.com/problems/minimum-string-length-after-removing-substrings/description/

class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        // int i=0;
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            if((!st.empty()) && ((s[i]=='B' && st.top()=='A') || (s[i]=='D' && st.top()=='C')))
            {
                st.pop();
                    
            }
            else
            {
                st.push(s[i]);
            }      
        }
        return st.size();
    }
};
