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
        ListNode* ans = new ListNode(0);
        ListNode* anshead = ans;
        ListNode* mover = head;
        int sum=0;
        mover = mover->next;
        while(mover!=NULL){
            sum+=mover->val;
            if(mover->val==0){
                ans->next = new ListNode(sum);
                ans = ans->next;
                sum=0;
            }
            mover = mover->next;
        }
        anshead = anshead->next;
        return anshead;
    }
};