// https://leetcode.com/problems/reorder-list/description/

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
    ListNode* reverse(ListNode* head)
    {
        ListNode* cur=head;
        ListNode* prev=NULL;
        while(cur)
        {
            ListNode* tmp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=tmp;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if (!head || !head->next) 
            return;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=reverse(slow->next);
        slow->next=NULL;
        while(head && mid)
        {
            ListNode* a=head->next;
            ListNode* b= mid->next;
            head->next=mid;
            mid->next=a;
            head=a;
            mid=b;
        }
    }
};
