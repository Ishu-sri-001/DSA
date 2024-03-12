// https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/description/

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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        int sum=0;
        unordered_map<int,ListNode*>mp;
        mp[0]=dummy;
        ListNode* cur=head;
        while(cur)
        {
            sum+=cur->val;
            if(mp.find(sum)!=mp.end())
            {
                ListNode* del=mp[sum]->next;
                int tmpSum=sum+del->val;
                while(del!=cur)
                {
                    mp.erase(tmpSum);
                    del=del->next;
                    tmpSum+=del->val;
                }
                mp[sum]->next=cur->next;
            }
            else
                mp[sum]=cur;
            cur=cur->next;
        }
        return dummy->next;
    }
};
