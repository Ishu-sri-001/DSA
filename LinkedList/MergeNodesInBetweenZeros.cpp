// https://leetcode.com/problems/merge-nodes-in-between-zeros/description/?envType=daily-question&envId=2024-07-04

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
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ans= head->next;
        int sum=0;
        ListNode* tmp=ans;
        while(tmp)
        {
            sum=0;
            while(tmp->val!=0)
            {
                sum+=tmp->val;
                tmp=tmp->next;
            }

            ans->val=sum;
            tmp=tmp->next;
            ans->next=tmp;
            ans=ans->next;
                
        }
        return head->next;
    }
};
