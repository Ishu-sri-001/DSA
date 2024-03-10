// https://leetcode.com/problems/minimum-depth-of-binary-tree/description/

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
    void findDpt(TreeNode* root,int &ans, int lvl)
    {
        if(root==NULL)
            return;
        if(!root->left && !root->right)
        {
            ans=min(ans,lvl);
            return;
        }
        findDpt(root->left,ans,lvl+1);
        findDpt(root->right,ans,lvl+1);
    }
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int ans=INT_MAX;
        findDpt(root,ans,1);
        return ans;
    }
};
