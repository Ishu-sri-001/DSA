// https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int search(vector<int>& a, int t) {
        int low=0,high=a.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(a[mid]==t)
                return mid;
            if(a[low]<=a[mid])
            {
                if(a[low]<=t && a[mid]>t)
                    high=mid-1;
                else 
                    low=mid+1;
            }
            else 
            {
                if(a[high]>=t && a[mid]<t)
                    low=mid+1;
                else 
                    high=mid-1;
            }
        }
        return -1;
    }
};
