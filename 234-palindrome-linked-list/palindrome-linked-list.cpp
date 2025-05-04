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
    bool isPalindrome(ListNode* head) {
                ListNode*temp=head;
                vector<int>val;
              while(temp!=NULL){
               val.push_back(temp->val);
               temp=temp->next;
              }

        int s=0;
        int n=val.size();
        int e=n-1;  
        while(s<e){
            if(val[s]!=val[e]){
                return false;
            }
            s++;
            e--;
        }    
    return true;}
};