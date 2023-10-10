// https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isOpening(char c)
    {
        return c=='(' || c=='{' || c=='[';
    }
    bool isMatching(char a,char b)
    {
        return (a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']');
    }
    bool isValid(string s) {
        stack<char>st;
        for (int i=0;i<s.size();i++)
        {
            if(isOpening(s[i]))
                st.push(s[i]);
            else 
            {
                if(st.empty())
                    return false;
                else if(!isMatching(st.top(),s[i]))
                    return false;
                else 
                    st.pop();
            }
        }
        return st.empty();
    }
};
