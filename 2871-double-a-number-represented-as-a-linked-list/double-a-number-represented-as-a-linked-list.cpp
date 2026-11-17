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
        vector<int> nums ; 
        ListNode* temp = head ; 

        while(temp != NULL) {
            nums.push_back(temp->val) ; 
            temp = temp->next ; 

        }

        int n = nums.size() ; 
        int carry = 0 ;
       
        ListNode* head1 = NULL ; 
        ListNode* tail = NULL ; 
        for(int i=n-1 ; i>=0 ; i--){
            int sum = ( nums[i] * 2 ) + carry ; 
            int digit = sum%10 ; 
            carry = sum/10 ; 
            ListNode* newNode = new ListNode(digit) ; 
            if(head1 == NULL) {
               head1 = tail = newNode ; 
               
            } 
            else {
                newNode->next = head1 ; 
                head1 = newNode ; 

            }

        }
        while(carry!=0) {
            int digit = carry%10 ; 
            carry = carry/10 ; 
            ListNode* newNode = new ListNode(digit) ; 
            newNode->next = head1 ; 
            head1 = newNode ;


        }
        return head1 ; 
    }
};