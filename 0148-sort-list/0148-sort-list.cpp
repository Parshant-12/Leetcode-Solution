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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode* mover = head;
        vector<int>arr;
        while(mover!=NULL){
            arr.push_back(mover->val);
            mover = mover->next;        
        }
        sort(arr.begin(),arr.end());
        ListNode* res = new ListNode(arr[0]);
        ListNode* newhead = res;
        for(int i=1;i<arr.size();i++){
            res->next = new ListNode(arr[i]);
            res=res->next;
        }
        return newhead;
    }
};