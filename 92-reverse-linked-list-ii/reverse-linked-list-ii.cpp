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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0) ; 
        dummy->next = head ; 
        int i=1 ; 
        ListNode* curr = head ;
        ListNode* prev=dummy ; 
        ListNode* c=head ;
        while(i!=left) {
            prev = curr ;
            curr = curr->next ; 
            i++ ;
        }
        c = curr ;
        ListNode* p = NULL ;
        ListNode* n = NULL ;
        for(int i=0 ; i<right-left+1 ; i++) {
            n = curr->next ; 
            curr->next = p ; 
            p = curr ; 
            curr = n ;

        }
        prev->next = p ; 
        c->next = curr ; 
        return dummy->next ; 

    }
};