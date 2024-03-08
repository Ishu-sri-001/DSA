// https://leetcode.com/problems/count-elements-with-maximum-frequency/description/

class Solution {
public:
    int maxFrequencyElements(vector<int>& n) {
        unordered_map<int,int>mp;
        int maxFreq=0;
        for (int i:n)
        {
            mp[i]++;
            maxFreq=max(maxFreq,mp[i]);
        }
        int ele=0;
        for (auto i:mp)
        {
            int curr=i.second;
            if(curr==maxFreq)
                ele++;
        }
        return maxFreq*ele;
    }
};
