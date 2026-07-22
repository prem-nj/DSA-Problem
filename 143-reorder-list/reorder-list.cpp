class Solution {
public:
    void reorderList(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return;

        ListNode* s = head;
        ListNode* f = head;
        ListNode* prevSlow = NULL;

        // Find middle
        while (f != NULL && f->next != NULL) {
            prevSlow = s;
            s = s->next;
            f = f->next->next;
        }

        ListNode* curr;

        if (f == NULL) {      // even length
            curr = s;
            prevSlow->next = NULL;
        } else {              // odd length
            curr = s->next;
            s->next = NULL;
        }

        // Reverse second half
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Merge two halves
        ListNode* l1 = head;
        ListNode* l2 = prev;

        while (l2 != NULL) {
            ListNode* p1 = l1->next;
            ListNode* p2 = l2->next;

            l1->next = l2;
            l2->next = p1;

            l1 = p1;
            l2 = p2;
        }
    }
};