

class Solution {
public:
    bool isPalindrome(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return true;

        ListNode *slow = head, *fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Skip the middle node if the length is odd
        if (fast != nullptr)
            slow = slow->next;

        // Reverse second half
        ListNode *prev = nullptr;
        ListNode *curr = slow;

        while (curr != nullptr) {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Compare
        while (prev != nullptr) {
            if (head->val != prev->val)
                return false;

            head = head->next;
            prev = prev->next;
        }

        return true;
    }
};