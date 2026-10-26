class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size() ; 
        int n2 = nums2.size() ;
        int i=0 ; 
        int j=0 ;  
        vector<int> ans ; 
        sort(nums1.begin() , nums1.end()) ; 
        sort(nums2.begin() , nums2.end()) ; 
        ans.push_back(-1) ; 
        int l=1 ;
        while(i<n1 && j<n2) {
            if(nums1[i] == nums2[j]) {
                
                //push the answer to the vactor
                if(ans[l-1] != nums1[i]) {
                    ans.push_back(nums1[i]) ; 
                    l++ ;
                    
                }
                i++ ; 
                j++ ; 
            }
            else if (nums1[i] > nums2[j]) {
                j++ ; 
            } 
            else {
                i++ ; 
            }
        }
        ans.erase(ans.begin()) ; 
        return ans ;
    }
};