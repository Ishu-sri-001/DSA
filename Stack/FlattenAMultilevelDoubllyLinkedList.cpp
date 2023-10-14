// https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* cur=head;
        stack<Node*>st;
        while(cur!=NULL || !st.empty())
        {
            if(cur->child!=NULL)
            {
                if(cur->next!=NULL)
                    st.push(cur->next);
                cur->next=cur->child;
                cur->next->prev=cur;
                cur->child=NULL;
            }
            else if(cur->next==NULL && !st.empty())
            {
                cur->next=st.top();
                st.pop();
                cur->next->prev=cur;
            }
            cur=cur->next;
        }
        return head;
    }
};
