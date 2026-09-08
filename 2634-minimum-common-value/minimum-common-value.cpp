class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size() ;
        int n2 = nums2.size() ; 

        unordered_set <int> s ;
        
       for(int i=0 ; i<n1 ; i++) {
         s.insert(nums1[i]);
       } 

       for(int i=0 ; i<n2 ; i++) {
        if(s.find(nums2[i]) != s.end()) {
            return nums2[i] ;
        }
       }

        return -1 ; 
     
        
    }
};