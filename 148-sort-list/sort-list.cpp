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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head ; 
        vector<int> arr ; 

        while(temp != NULL) {
            arr.push_back(temp->val) ; 
            temp = temp->next ; 
        }
        sort(arr.begin() , arr.end()) ; 


        int l = arr.size() ;
        ListNode* tail = NULL ; 
        head = tail = NULL ;
        for(int i=0 ; i<l ; i++) {
            ListNode* newNode = new ListNode(arr[i]) ; 
            if(head == NULL) {
                head = tail  = newNode ; 
            }
            else {
                tail->next = newNode ; 
                tail = newNode ; 
            }
        }
        return head ; 
    }
};