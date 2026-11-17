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
    ListNode* doubleIt(ListNode* head) {
        ListNode* prev = NULL ; 
        ListNode* curr = head ; 
        ListNode* next = NULL ; 

        while(curr!=NULL) {
            next = curr->next ; 
            curr->next = prev ; 
            prev = curr ; 
            curr = next ; 
        }
        head = prev ; 
        ListNode* temp = head ; 
        int carry = 0 ;
        ListNode* head1=NULL ;
        while(temp != NULL) {
           int sum = temp->val * 2 + carry ; 
           int digit = sum%10 ;
           carry = sum/10 ; 
           ListNode* newNode = new ListNode(digit) ; 
           if(head1 == NULL) {
            head1 = newNode ;
           }
           else {
            newNode->next = head1 ; 
            head1 = newNode ; 
           }
           temp = temp->next ; 

        }
        while(carry != 0) {
            int digit = carry%10 ;
            carry = carry/10 ;
            ListNode* newNode = new ListNode(digit) ; 
            newNode->next = head1 ; 
            head1 = newNode ; 

        }
        return head1 ;
        
    }
};