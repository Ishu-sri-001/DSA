//https://leetcode.com/problems/majority-element/description/

class Solution {
public:
    int majorityElement(vector<int>& n) {
        int ind=0;
        int c=1;
        for (int i=1;i<n.size();i++)
        {
            if(n[i]==n[ind])
                c++;
            else 
                c--;
            if(c==0)
            {
                ind=i;
                c=1;
            }
        }
        // c=0;
        // for (int i=0;i<n.size();i++)
        // {
        //     if(n[i]==n[ind])
        //         c++;
        // }
        // if(c>(n.size()/2))
        return n[ind];
       // return 0;
    }
};
