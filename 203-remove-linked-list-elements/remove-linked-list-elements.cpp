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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*dummy=new ListNode(0);
        ListNode*current=dummy;
        dummy->next=head;
        while(current!=NULL && current->next != NULL){
            if(current->next->val==val){
                ListNode*temp=current->next;
                current->next=current->next->next;
                delete temp;
            }else{
                current=current->next;
            }
        }
        head=dummy->next;
        delete dummy;
        return head;
    }
};