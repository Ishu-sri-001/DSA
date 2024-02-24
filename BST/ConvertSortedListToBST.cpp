// https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    vector<int>v;
    TreeNode* rec(int i,int j)
    {
        if(j<i)
            return NULL;
        int mid=(i+j)/2;
        TreeNode* tmp=new TreeNode;
        tmp->val=v[mid];
        tmp->left=rec(i,mid-1);
        tmp->right=rec(mid+1,j);
        return tmp;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* temp=head;
        while(temp)
        {
            //if(temp!=NULL)
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        return rec(0,n-1);
    }
};
