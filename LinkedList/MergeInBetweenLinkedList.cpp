// https://leetcode.com/problems/merge-in-between-linked-lists/description/?envType=daily-question&envId=2024-03-20

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
    ListNode* mergeInBetween(ListNode* l1, int a, int b, ListNode* l2) {
        int i=1;
        ListNode* tmp=l1;
        ListNode* tmp2=l2;
        while(i!=a)
        {
            tmp=tmp->next;
            i++;
        }
        ListNode* cur=tmp->next;
        // tmp1->next=tmp2;
        // tmp1=tmp1->next;
        while(i<=b)
        {
            cur=cur->next;
            i++;
        }  
        tmp->next=l2;
        while(l2->next)
            l2=l2->next;
        l2->next=cur;
        return l1;
    }
};
