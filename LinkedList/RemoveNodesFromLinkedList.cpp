// https://leetcode.com/problems/remove-nodes-from-linked-list/description/

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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*>st;
        ListNode* cur=head;
        while(cur!=NULL)
        {
            while(!st.empty() && cur->val > st.top()->val)
            {
                st.pop();
            }
            st.push(cur);
            cur=cur->next;
        }
        cur=NULL;
        while(!st.empty())
        {
            ListNode* tmp=st.top();
            st.pop();
            tmp->next=cur;
            cur=tmp;
        }
        return cur;
    }
};
