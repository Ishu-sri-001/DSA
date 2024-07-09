// https://leetcode.com/problems/next-permutation/description/

class Solution {
public:
    void nextPermutation(vector<int>& n) {
        int ind=-1;
        int len=n.size();
        for(int i=len-2;i>=0;i--)
        {
            if(n[i]<n[i+1])
            {
                ind=i;
                break;
            }
        }
        if(ind==-1)
        {
            reverse(n.begin(),n.end());
            return;
        }
        for(int i=len-1;i>ind;i--)
        {
            if(n[i]>n[ind])
            {
                swap(n[i],n[ind]);
                break;
            }
        }
        sort(n.begin()+ind+1,n.end());
    }
};
