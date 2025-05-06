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
    ListNode* rotateRight(ListNode* head, int k) {
        if (k == 0 || !head || !head->next) {
            return head;
        }

        // calculate length
        ListNode* temp = head;
        int length = 1 ;
        while (temp->next != NULL) {
            length++;
            temp = temp->next;
        }

        temp->next = head;
        ListNode* newtail = head;


        k = k % length;

        if (k == 0) {
       temp->next = nullptr;  
       return head;}

        int stepsToNewTail = length - k;

        for (int i = 1; i <stepsToNewTail; i ++) {
            newtail = newtail->next;
        }
        ListNode*newhead=newtail->next;
     newtail->next=nullptr;
         return newhead;

    }
};