class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s ; 
        int n = nums1.size() ; 
        vector<int> ans ; 

        for(int i=0 ; i<n ; i++) {
            if(s.find(nums1[i]) == s.end()) {
                s.insert(nums1[i]) ; 
            }
        } 

        int n2 = nums2.size() ; 
        for(int i=0 ; i<n2 ; i++) {
            if(s.find(nums2[i]) != s.end()) {
                ans.push_back(nums2[i]) ; 
                s.erase(nums2[i]) ; 
            }
        }

        return ans ; 
    }

};