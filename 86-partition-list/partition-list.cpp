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
    ListNode* partition(ListNode* head, int x) {
        ListNode*small=new ListNode(0);
        ListNode*large=new ListNode(0);
        ListNode*spoint=small;
        ListNode*lpoint=large;
        while(head){
            if(head->val<x){
                spoint->next=head;
                spoint=spoint->next;
            }else{
                lpoint->next=head;
                lpoint=lpoint->next;
            }
            head=head->next;
        }
        spoint->next=large->next;
        lpoint->next=nullptr;
        return small->next;
    }
};