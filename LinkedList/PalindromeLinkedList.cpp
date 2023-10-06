// https://leetcode.com/problems/palindrome-linked-list/description/

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
    ListNode* midEle(ListNode* head)
    {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        if(fast!=NULL)
            return slow->next;
        return slow;
    }
    ListNode* reverse(ListNode* head)
    {
        ListNode* cur=head;
        ListNode* prev=NULL;
        while(cur)
        {
            ListNode* temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL )
            return true;
        ListNode* mid=midEle(head);
        ListNode* last=reverse(mid);
        ListNode* cur=head;
        while(last)
        {
            if(cur->val!=last->val)
                return false;
            cur=cur->next;
            last=last->next;
        }
        return true;
    }
};
