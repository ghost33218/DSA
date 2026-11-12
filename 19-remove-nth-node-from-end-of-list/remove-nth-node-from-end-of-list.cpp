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
        ListNode* temp = head ; 
        ListNode* t ;
        ListNode* k ; 
        int total = 0 ; 
    
        while(temp != NULL) {
            temp = temp->next ; 
            total++ ; 
        } 
        int l = total - n ; 
        if(l <  0) {
            return head ;
        }
        if(l==0) {
            head = head->next ; 
            return head ; 
        }

        temp = head ; 
        int i=1 ; 

        while(temp != NULL) { 
            if(i == l) {
                 t = temp ; 

            }
            if(i == l+1) {
                 k = temp->next ; 
            }
            i++ ; 
            temp = temp->next ; 
        }
        t->next = k ; 
        return head ; 

    }
};