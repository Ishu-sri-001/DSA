// https://leetcode.com/problems/find-the-difference/description/

class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans='\0'; // null
        for (auto c:s)
            ans^=c;
        for (auto c:t)
            ans^=c;
        return ans;
    }
};
