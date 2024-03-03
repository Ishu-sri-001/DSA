// https://leetcode.com/problems/binary-tree-level-order-traversal-ii/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        stack<vector<int>>st;
        vector<int>v;
        if(root==NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode* tmp=q.front();
            q.pop();
            if(tmp==NULL)
            {
                if(!q.empty())
                {
                    q.push(NULL);
                    st.push(v);
                    v.resize(0);
                }
            }
            else 
            {
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
                v.push_back(tmp->val);
            }
        }
        st.push(v);
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
