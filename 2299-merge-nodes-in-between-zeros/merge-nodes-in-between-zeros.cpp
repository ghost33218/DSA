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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next ; 
        ListNode* ans = head ;
        ListNode* prev = head ;
        int sum = 0 ;

        while(temp!=NULL) {
            sum+=temp->val ; 
            if(temp->val == 0) {
               ans->val = sum ; 
               prev = ans ;
               ans = ans->next ; 
               sum = 0;

            }
            temp = temp->next ;

        }
        prev->next = NULL ; 
        return head ; 
        
    }
};