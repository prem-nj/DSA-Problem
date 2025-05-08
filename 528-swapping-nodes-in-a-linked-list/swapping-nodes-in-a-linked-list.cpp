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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*start=head;
        ListNode*end=head;
        ListNode*temp=head;
        int length=0;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        for(int i=1;i<k;i++){
            start=start->next;
        }
        for(int i=1;i<length-k+1;i++){
            end=end->next;
        }

        swap(start->val,end->val);
        return head;
        
    }
};