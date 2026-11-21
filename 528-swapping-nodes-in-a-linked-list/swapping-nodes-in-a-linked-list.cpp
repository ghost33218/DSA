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
        ListNode* fast = head ; 
        ListNode* slow = head ; 
        ListNode* a ;
        ListNode* b ; 
        for(int i=0 ; i<k-1 ; i++) {
            fast = fast->next ; 
        }
        a = fast ;
        while(fast->next != NULL) {
           slow = slow->next ; 
           fast = fast->next ;
        }
        b = slow ;
        int temp ; 
        temp = a->val ; 
        a->val = b->val ; 
        b->val = temp ; 

        return head ; 

        
        
    }
};