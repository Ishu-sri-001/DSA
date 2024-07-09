// https://leetcode.com/problems/rotate-image/description/

class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int len=m.size();
        for(int i=0;i<len-1;i++)
        {
            for(int j=i+1;j<len;j++)
            {
                swap(m[i][j],m[j][i]);
            }
        }
        for (int i=0;i<len;i++)
        {
            reverse(m[i].begin(),m[i].end());
        }
    }
};
