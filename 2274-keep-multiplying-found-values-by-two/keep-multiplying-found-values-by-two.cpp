class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> s ; 
        int n = nums.size() ;

        for(int i=0 ; i<n ; i++) {
            if(s.find(nums[i]) == s.end()) {
                s.insert(nums[i]) ; 
            }
        }

        while(s.find(original) != s.end()) {
            original = 2* original ; 
        }

        return original ; 
        
    }
};