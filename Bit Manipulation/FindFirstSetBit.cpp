// https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1

//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        if(n==0)
            return 0;
        return log2(n & -n)+1;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}

// } Driver Code Ends



// The result of n & -n has only the rightmost set bit of n set to 1, while all other bits are 0
// We use the log2 function to find the position of the rightmost set bit
