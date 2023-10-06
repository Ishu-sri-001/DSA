// https://leetcode.com/problems/linked-list-cycle-ii/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* hasCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if (fast==slow)
                return slow;
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode* meet=hasCycle(head);
        if(meet==NULL)
            return NULL;
        ListNode* start=head;
        while(start!=meet)
        {
            start=start->next;
            meet=meet->next;
        }
        return start;
    }
};


