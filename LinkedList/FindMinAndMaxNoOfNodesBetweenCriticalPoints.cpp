// https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/description/

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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* cur=head;
        ListNode* prev=NULL;
        vector<int>v;
        int posn=0;
        while(cur && cur->next)
        {
            if(prev)
            {
                if((cur->val > prev->val && cur->val > cur->next->val) || (cur->val <                    prev->val && cur->val < cur->next->val))
                {
                    v.push_back(posn);
                }
            }
            prev=cur;
            cur=cur->next;
            posn++;
        }

        if(v.size()<2)
            return {-1,-1};

        int minDist=INT_MAX;
        int maxDist=v.back()-v.front();

        for (int i=1;i<v.size();i++)
        {
            minDist=min(minDist,v[i]-v[i-1]);
        }

        return {minDist,maxDist};
    }
};
