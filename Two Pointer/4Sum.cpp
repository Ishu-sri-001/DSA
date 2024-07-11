// https://leetcode.com/problems/4sum/description/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& n, int t) {
        int len=n.size();
        vector<vector<int>>ans;
        sort(n.begin(),n.end());
        for(int i=0;i<len;i++)
        {
            if(i>0 && n[i]==n[i-1])
                continue;
            for(int j=i+1;j<len;j++)
            {
                if(j!=i+1 && n[j]==n[j-1])
                    continue;
                int k=j+1;
                int l=len-1;
                while(k < l)
                {
                    long long sum=n[i]+n[j];
                    sum+=n[k];
                    sum+=n[l];
                    if(sum==t)
                    {
                        ans.push_back({n[i],n[j],n[k],n[l]});
                        k++;
                        l--;
                        while(k<l && n[k] ==n[k-1])
                            k++;
                        while(k<l && n[l]==n[l+1])
                            l--;
                    }
                    else if(sum<t)
                    {
                        k++;
                    }
                    else 
                    {
                        l--;
                    }
                }
            }
        }
        return ans;
    }
};
