// https://leetcode.com/problems/maximum-odd-binary-number/description/

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int c1=count(s.begin(),s.end(),'1');
        int c0=n-c1;
        return string(c1-1,'1')+string(c0,'0')+string(1,'1');
    }
};
