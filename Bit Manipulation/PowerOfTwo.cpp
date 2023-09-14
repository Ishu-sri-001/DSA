// https://leetcode.com/problems/power-of-two/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(0>=n)
            return false;
        return !(n & (n-1));
    }
};
