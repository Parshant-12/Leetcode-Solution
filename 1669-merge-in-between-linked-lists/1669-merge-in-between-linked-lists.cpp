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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int cnt =0;
        ListNode* mover = list1;
        ListNode* x;
        ListNode* y;
        while(mover!=NULL){
            cnt++;
            if(cnt==a){
                x=mover;
            }
            else if(cnt==(b+1)){
                y=mover;
            }
            mover = mover->next;
        }
        x ->next = list2;
        mover = list2;
        while(mover->next!=NULL){
            mover = mover->next;
        }
        mover->next = y->next;
        return list1;
    }
};