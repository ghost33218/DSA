/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode* slow = head ; 
        ListNode* fast = head ; 
        bool isCycle = false ; 

        // finding if the cycle exists or not 

        while(fast!=NULL && fast->next!=NULL) {
            slow = slow->next ;
            fast = fast->next->next ; 

            if(slow == fast) {
                isCycle = true ;
                break ; 
            }
        }

        if(!isCycle) {
            return NULL ;
        }

        else {
            slow = head ; 

            while(slow != fast) {
                slow = slow->next ; 
                fast = fast->next ; 
            }
        }

        return slow ; 
        
    }
};