// https://leetcode.com/problems/sort-characters-by-frequency/description/

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        priority_queue<pair<int,char>>max;
        for (char c:s)
            freq[c]++;
        for (auto it:freq)
            max.push({it.second,it.first});
        s="";
        while(!max.empty())
        {
            s+=string(max.top().first,max.top().second);
            max.pop();
        }
        return s;
    }
};
