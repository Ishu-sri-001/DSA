// https://leetcode.com/problems/path-sum-ii/description/

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
    vector<vector<int>> pathSum(TreeNode* root, int t) {
       vector<vector<int>>ans;
        vector<int>v;
        Sum(root,ans,v,t);
        return ans;
    }
    void Sum(TreeNode* root, vector<vector<int>>&ans, vector<int>&v,int t)
    {
        if(root==NULL)
            return;
        v.push_back(root->val);
        if(root->left==NULL && root->right==NULL && root->val==t)
            ans.push_back(v);
        Sum(root->left,ans,v,t-root->val);
        Sum(root->right,ans,v,t-root->val);
        v.pop_back();
    }
};
