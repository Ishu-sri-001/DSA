// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/

class Solution {
public:
    int minBitFlips(int s, int g) {
        int t=s^g;
        int temp=1,c=0;
        while(t>=temp)
        {
            if(t & temp)
                c++;
            temp<<=1;
        }
        return c;
    }
};
