// https://leetcode.com/problems/3sum/description/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        int len=n.size();
        sort(n.begin(),n.end());
        vector<vector<int>>ans;
        for(int i=0;i<len;i++)
        {
            if(i>0 && n[i]==n[i-1])
                continue;
            int j=i+1;
            int k=len-1;
            while(j<k)
            {
                int sum=n[i] + n[j] + n[k];
                if(sum > 0)
                {
                    k--;
                }
                else if(sum<0)
                {
                    j++;
                }
                else
                {
                   ans.push_back({n[i],n[j],n[k]});
                    j++;
                    k--;
                    while(j<k && n[j]==n[j-1])
                        j++;
                    // while(j<k && n[k]==n[k-1])
                    //     k--;
                }
            }
        }
        return ans;
    }
};
