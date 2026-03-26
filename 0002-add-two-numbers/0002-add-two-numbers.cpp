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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = l1->val + l2->val;
        int carry=0;
        if(sum>9){
            carry = 1;
        }
        ListNode* node  = new ListNode(sum%10);
        ListNode* res(node);
        ListNode* mover = res;
        l1 = l1->next;
        l2 = l2->next;
        while(l1!=NULL || l2!=NULL){
            if(l1!=NULL && l2!=NULL){
                sum = l1->val + l2->val + carry;
                if(sum>9){
                    carry = 1;
                }
                else{
                    carry=0;
                }
                ListNode* node  = new ListNode(sum%10);
                mover->next = node;
                mover = mover->next;
                l1 = l1->next;
                l2 = l2->next;
            }
            else if(l1!=NULL && l2==NULL){
                sum = l1->val + carry;
                if(sum>9){
                    carry = 1;
                }
                else{
                    carry=0;
                }
                ListNode* node  = new ListNode(sum%10);
                mover->next = node;
                mover = mover->next;
                l1 = l1->next;
            }
            else if(l1==NULL && l2!=NULL){
                sum = l2->val + carry;
                if(sum>9){
                    carry = 1;
                }
                else{
                    carry=0;
                }
                ListNode* node  = new ListNode(sum%10);
                mover->next = node;
                mover = mover->next;
                l2 = l2->next;
            }
        }
        if(carry){
            ListNode* node = new ListNode(1);
            mover->next = node;
        }
        return res;
    }
};