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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head ; 
        string s = "" ; 
        while(temp != NULL) {
            s += temp->val ; 
           temp = temp->next ; 

        }
        int st = 0 ; 
        int end = s.length()-1 ; 

        while(st < end) {
            if(s[st] != s[end]) {
                return false ;
            }
            st++ ; 
            end-- ; 
        }
        return true ; 
    }
};