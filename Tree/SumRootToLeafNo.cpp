// https://leetcode.com/problems/sum-root-to-leaf-numbers/description/

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
    int calc(TreeNode* root, int cur)
    {
        if(!root)
            return 0;
        cur=cur*10+root->val;
        if(!root->left && !root->right)
            return cur;
        return calc(root->left,cur)+calc(root->right,cur);
    }
    int sumNumbers(TreeNode* root) {
        return calc(root,0);
    }
};
