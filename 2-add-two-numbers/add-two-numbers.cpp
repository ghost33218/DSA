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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1 ; 
        ListNode* temp2 = l2 ; 
        ListNode* l3 = NULL ; 
        ListNode* head = NULL ; 
        ListNode* tail = NULL ; 
        int carry = 0 ;

        if(temp1 == NULL && temp2 == NULL) {
            return head ; 
        }
        while(temp1 != NULL && temp2 != NULL) {
            int sum = temp1->val + temp2->val + carry ; 
            int rem = sum%10 ; 
            ListNode* newNode = new ListNode(rem) ; 
            if(l3 == NULL) {
                head = tail = newNode ;
                l3 = head ;  
            } 
            else {
                tail->next = newNode ;
                tail = newNode ; 
            }
            carry = sum/10 ; 
            temp1 = temp1->next ; 
            temp2 = temp2->next ; 
        }
        if(temp1 == NULL && temp2 == NULL) {
            
        }
        else if(temp2 == NULL) {
            while(temp1!=NULL) {
                int sum = temp1->val + carry ; 
                int rem = sum%10 ; 
                ListNode* newNode = new ListNode(rem) ; 
                 if(l3 == NULL) {
                  head = tail = newNode ;
                  l3 = head ;  
                      } 
                   else {
                    tail->next = newNode ;
                     tail = newNode ; 
                          }
                carry = sum/10 ; 
                temp1 = temp1->next ; 

            }

        }
        else {
            while(temp2!=NULL) {
                int sum = temp2->val + carry ; 
                int rem = sum%10 ; 
                ListNode* newNode = new ListNode(rem) ; 
                 if(l3 == NULL) {
                  head = tail = newNode ;
                  l3 = head ;  
                      } 
                   else {
                    tail->next = newNode ;
                     tail = newNode ; 
                          }
                carry = sum/10 ; 
                temp2 = temp2->next ; 

            }

        }

        while(carry > 0 ) {
            int rem = carry%10 ; 
            ListNode* newNode = new ListNode(rem) ; 
            tail->next = newNode ; 
            tail = newNode ; 
            carry = carry/10 ; 
        }

        return head ; 
        
    }
};