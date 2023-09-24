// https://leetcode.com/problems/sort-an-array/class Solution {
public:
    vector<int> sortArray(vector<int>& n) 
    {
        int l=0;
        int r=n.size()-1;
        mergeSort(n,l,r);  
        return n; 
    }
    void mergeSort(vector<int>&n,int l,int r)
    {
        if(l<r)
        {
            int mid=(l+r)/2;
            mergeSort(n,l,mid);
            mergeSort(n,mid+1,r);
            merge(n,l,r,mid);
        }
    }
    void merge(vector<int>&n,int l,int r,int mid)
    {
        int n1=mid-l+1;
        int n2=r-mid;
        vector<int>left(n1);
        vector<int>right(n2);
        for (int i = 0; i < n1; i++) 
        {
            left[i] = n[l + i];
        }
        for (int j = 0; j < n2; j++)
        {
            right[j] = n[mid + 1 + j];
        }
        int i=0,j=0;
        int k=l;
        while(i<n1 && j<n2)
        {
            if(left[i]<=right[j])
                n[k++]=left[i++];
            else 
                n[k++]=right[j++];
        }
        while(i<n1)
            n[k++]=left[i++];
        while(j<n2)
            n[k++]=right[j++];
    }
};

