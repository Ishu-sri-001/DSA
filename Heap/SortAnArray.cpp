// https://leetcode.com/problems/sort-an-array/

class Solution {
public:
    void heapify(vector<int>&n,int len,int i)
    {
        int lar=i;
        int l=2*i+1;
        int r=i*2+2;
        if(l<len && n[l]>n[lar])
            lar=l;
        if(r<len && n[r]>n[lar])
            lar=r;
        if(lar!=i)
        {
            swap(n[lar],n[i]);
            heapify(n,len,lar);
        }
    }
    void buildHeap(vector<int>&n,int l)
    {
        for (int i=(l-2)/2;i>=0;i--)
            heapify(n,l,i);
    }
    vector<int> sortArray(vector<int>& n) {
        buildHeap(n,n.size());
        for (int i=n.size()-1;i>=1;i--)
        {
            swap(n[0],n[i]);
            heapify(n,i,0);
        }
        return n;
    }
};
