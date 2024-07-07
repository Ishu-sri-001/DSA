// https://leetcode.com/problems/count-submatrices-with-equal-frequency-of-x-and-y/description/
//  764/770 test cases passed

class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int count=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(i==0 && j==0)
                    continue;
                //if(grid[i][j]=='.')
                 //   continue;
                int x=0,y=0;
                for(int p=0;p<=i;p++)
                {
                    for(int q=0;q<=j;q++)
                    {
                        if(grid[p][q]=='X')
                            x++;
                        if(grid[p][q]=='Y')
                            y++;
                    }
                }
                if(x>0 && x==y)
                    count++;
            }
        }
        return count;
    }
};
