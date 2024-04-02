// https://leetcode.com/problems/find-if-path-exists-in-graph/description/

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int s, int des) {
        vector<bool>vis(n,false);
        queue<int>q;
       //vis[s]=true;
        q.push(s);
        while(!q.empty())
        {
            int cur=q.front();
            q.pop();
            if(cur==des)
                return true;
            for(const auto n:edges)
            {
                if(n[0]==cur && !vis[n[1]])
                {
                    q.push(n[1]);
                    vis[n[1]]=true;
                }  
                else if(n[1]==cur && !vis[n[0]])
                {
                    q.push(n[0]);
                    vis[n[0]]=true;
                }
            }
        }
        return false;
    }
};
