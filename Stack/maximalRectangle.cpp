// https://leetcode.com/problems/maximal-rectangle/description/

class Solution {
public:
    int maxHistogram(vector<int>& h) {
        int n = h.size();
        vector<int> left(n), right(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && h[st.top()] >= h[i]) {
                st.pop();
            }
            left[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        while (!st.empty()) {
            st.pop();
        }

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && h[st.top()] >= h[i]) {
                st.pop();
            }
            right[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        int maxArea = 0;
        for (int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;
            int area = width * h[i];
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& m) {
        vector<int>curRow(m[0].size(),0);
        int maxAns=maxHistogram(curRow);
        for (int i=0;i<m.size();i++)
        {
            for (int j=0;j<m[i].size();j++)
            {
                if(m[i][j]=='1')
                    curRow[j]+=1;
                else 
                    curRow[j]=0;
            }
            int curAns=maxHistogram(curRow);
            maxAns=max(maxAns,curAns);
        }
        return maxAns;
    }
};
