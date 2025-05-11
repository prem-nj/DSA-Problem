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
        int gcd(int a,int b){
            if(b==0){
                return a;
            }
            return gcd(b,a%b);
        }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*curr=head;
        while(curr&&curr->next){
            int m=gcd(curr->val,curr->next->val);
            ListNode*temp=new ListNode(m);
            temp->next=curr->next;
            curr->next=temp;
            curr=curr->next->next;
        }
        return head;
    }
};