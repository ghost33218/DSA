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
        int total = 0 ; 
        ListNode* temp = head ;
        int i=1 ; 
        int a=0 , b=0 ;  

        while(temp!=NULL) {
            if(i == k) {
                a = temp->val ; 
            }
            i++;
            temp = temp->next ; 
            total++ ;

        }
        temp = head ; 
        i=1 ; 
        int end = total-k+1 ; 
        while(temp!=NULL) {
            if(i==end) {
                b = temp->val ;
            } 
            i++ ; 
            temp = temp->next ; 
        }
        temp = head ; 
        i = 1 ;
        while(temp != NULL) {
            if(i==k) {
                temp->val = b ;
            }
            if(i == end)  {
                temp->val = a ; 
            }
            i++ ;
            temp = temp->next ;
        }
        return head ; 
    }
};