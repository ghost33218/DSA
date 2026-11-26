class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s ; 
        int n = nums2.size() ; 
        vector<int>ans(n,0) ;

        for(int i=n-1 ; i>=0 ; i--) {
          while(s.size() >0 && s.top()<=nums2[i]) {
             s.pop() ;
          }  
          if(s.empty()) {
            ans[i] = -1 ; 
          }
          else {
            ans[i] = s.top() ;
          }
          s.push(nums2[i]) ; 
        } 
        vector<int> ansf ; 

        for(int i=0 ; i<=nums1.size()-1 ; i++) {
            for(int j=0 ; j<n ; j++) {
                if(nums1[i] == nums2[j]) {
                  ansf.push_back(ans[j]) ;
                  break ;
                }
            }
        }
        return ansf ;
    }
};