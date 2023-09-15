// https://leetcode.com/problems/single-number-iii/

class Solution {
public:
    vector<int> singleNumber(vector<int>& n) {
        int ans=0;
        for (auto i:n)
            ans^=i;
        int lst=1;
        while((lst & ans)==0)
            lst<<=1;
        int g1=0,g2=0;
        for (auto i:n)
        {
            if(i & lst)
                g1^=i;
            else 
                g2^=i;
        }
        return vector<int>{g1,g2};
    }
};
