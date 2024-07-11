// https://www.interviewbit.com/problems/subarray-with-given-xor/

int Solution::solve(vector<int> &a, int b) {
    int len=a.size();
    int xr=0;
    map<int,int>mp;
    mp[xr]++;
    int cnt=0;
    for(int i=0;i<len;i++)
    {
        xr=xr^a[i];
        int x=xr^b;
        cnt+=mp[x];
        mp[xr]++;
    }
    return cnt;
}
