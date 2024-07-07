// https://leetcode.com/problems/find-the-encrypted-string/description/

class Solution {
public:
    string getEncryptedString(string s, int k) {
        int len=s.size();
        string ans=s;
        for(int i=0;i<len;i++)
        {
            ans[i]=s[(i+k)%len];
        }
        return ans;
    }
};
