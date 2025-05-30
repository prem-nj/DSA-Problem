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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        ListNode* temp = head;
        int length = 0;
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        int m = length - n;
        if (length == n) {
            ListNode* newh = head->next;
            delete head;
            return newh;
        }

        for (int i = 1; i < length - n; i++) {
            curr = curr->next;
        }
        ListNode* todelete = curr->next;
        curr->next = curr->next->next;
        delete todelete;
        return head;
    }
};