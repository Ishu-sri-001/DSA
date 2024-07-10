// https://leetcode.com/problems/pascals-triangle/description/

class Solution {
public:
    vector<int> genRow(int row)
    {
        vector<int>ans;
        long long sum=1;
        ans.push_back(1);
        for(int col=1;col<row;col++)
        {
            sum=sum*(row-col);
            sum=(sum)/col;
            ans.push_back(sum);
        }   
        return ans;
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        for (int i=1;i<=n;i++)
        {
            ans.push_back(genRow(i));
        }
        return ans;
    }
};
