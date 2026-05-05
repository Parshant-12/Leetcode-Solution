class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        if(k==0 || head->next==NULL){
            return head;
        }
        int len = 0;
        ListNode* mover = head;
        while(mover!=NULL){
            len++;
            mover = mover->next;
        }
        int rotate = k%len;
        int setnode = len-rotate;
        if(rotate==0){
            return head;
        }
        mover = head;
        int cnt =1;
        while(cnt!=setnode && mover!=NULL){
            cnt++;
            mover=mover->next;
        }
        ListNode* tmp = mover;
        mover=mover->next;
        tmp->next=NULL;
        tmp = mover;
        while(mover->next!=NULL){
            mover=mover->next;
        }
        mover->next=head;
        return tmp;
    }
};