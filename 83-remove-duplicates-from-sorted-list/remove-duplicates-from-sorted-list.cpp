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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return head ; 
        }
        ListNode* x = head ; 
        ListNode* y = head->next ; 
    

        while(x!=NULL && y!=NULL) {
            if(x->val == y->val) {
              while(y!=NULL && y->val == x->val )  {
                
                    y = y->next ; 

                }
                x->next = y ; 
            }
            else {
                x = x->next ; 
                y = y->next ; 
            }
        }
        return head ; 
    }
};