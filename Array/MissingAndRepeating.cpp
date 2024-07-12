// https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> a, int n) {
        unordered_map<int,int>mp;
        vector<int>ans(2,0);
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(mp.find(i)==mp.end())
            {
                ans[1]=i;
            }
            else if(mp[i]==2)
                ans[0]=i;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
