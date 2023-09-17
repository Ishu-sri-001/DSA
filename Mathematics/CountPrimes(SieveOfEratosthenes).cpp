// https://leetcode.com/problems/count-primes/description/

class Solution {
public:
    int countPrimes(int n) 
    {
        if(n<=2)
            return 0;
        vector<bool>a(n,true);
        a[0]=false;
        a[1]=false;
        int c=0;
        for (int i=2;i*i<=n;i++)
        {
            for (int j=2*i;j<n;j+=i)
            {
                a[j]=false;
            }
        }
        for (int i=2;i<a.size();i++)
        {
            if(a[i])
                c++;
        }
        return c;
    }
};






// 54/66 test cases passed
