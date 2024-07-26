// https://leetcode.com/problems/rotate-string/description/

class Solution {
public:
    bool rotateString(string s, string g) {
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            s+=s[i];
            string sub=s.substr(i+1,len+1);
            if(sub==g)
                return true;
        }
        return false;
    }
};
