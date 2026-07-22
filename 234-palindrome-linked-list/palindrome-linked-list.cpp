class Solution {
public:
    bool isPalindrome(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return true;

        ListNode* s = head;
        ListNode* f = head;

        while (f != NULL && f->next != NULL) {
            s = s->next;
            f = f->next->next;
        }

        ListNode* curr;

        if (f == NULL) {      // even length
            curr = s;
        } else {              // odd length
            curr = s->next;
        }

        ListNode* prev = NULL;
        ListNode* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        while (prev != NULL) {
            if (prev->val != head->val)
                return false;

            prev = prev->next;
            head = head->next;
        }

        return true;
    }
};