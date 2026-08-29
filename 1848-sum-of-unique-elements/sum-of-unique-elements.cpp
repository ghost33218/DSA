class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int , int> freq ; 
        int n = nums.size() ; 
        int count = 0 ;


        for(int i=0 ; i<n ; i++) {
            freq[nums[i]] ++ ; 
        } 
        for(auto it : freq) {
            if(it.second == 1) {
                count += it.first ; 
            }
        }
        return count ; 
    }
};