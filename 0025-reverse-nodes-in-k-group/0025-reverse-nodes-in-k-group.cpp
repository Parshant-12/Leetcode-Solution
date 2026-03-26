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
    ListNode* rev(ListNode* head,ListNode* tail){
        ListNode* prev = NULL;
        ListNode* move = head;
        ListNode* tmp = head;
        while(move!=tail){
            move = move->next;
            tmp -> next = prev;
            prev = tmp;
            tmp = move;
        }
        move ->next = prev;
        return move;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head->next==NULL || k==1){
            return head;
        }
        int cnt = 0;
        ListNode* start = head;
        ListNode* mover = head;
        ListNode* res = new ListNode(0);
        while(mover!=NULL){
            cnt++;
            if(cnt==k){
                head = mover;
            }
            if(cnt%k==0){
                ListNode* tmp = mover->next;
                mover = rev(start,mover);
                res->next = mover;
                res = start;
                start = tmp;
                mover = tmp;
                continue;
            }
            mover = mover->next;
        }
        res->next = start;
        return head;
    }
};