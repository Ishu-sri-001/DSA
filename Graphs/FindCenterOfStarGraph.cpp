// https://leetcode.com/problems/find-center-of-star-graph/description/

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int t=edges[0][0];
        if (t!=edges[1][0] && t!=edges[1][1])
        {
            t=edges[0][1];
        }
        return t;
    }
};
