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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> m ; 
        int n = nums.size() ; 

        for(int i=0 ; i<n ; i++) {
            m.insert(nums[i]) ; 
        }
        ListNode* temp = head ; 
        ListNode* prev = head ; 

        while(temp!=NULL) {
            if(m.find(temp->val) != m.end()) {
                if(temp==head) {
                   head = head->next ; 
                   temp->next = NULL ;
                   temp = head ; 
                   prev = temp ; 
                }
                else {
                 prev->next = temp->next ; 
                 temp = temp->next ;  
                }

            } 
            else {
                prev = temp ; 
                temp = temp->next ; 
            }
        }
        return head  ; 
        
    }
};