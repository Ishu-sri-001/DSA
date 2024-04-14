// https://leetcode.com/problems/sum-of-left-leaves/description/

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
    int calc(TreeNode* root,bool isLeft)
    {
        if(!root)
            return 0;
        if(!root->right && !root->left && isLeft)
            return root->val;
        return (calc(root->right,false)+ calc(root->left,true));
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        bool isLeft=false;
        int ans=calc(root,isLeft);
        return ans;
    }
};
