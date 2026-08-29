class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size() ; 
        int count = 0 ;
        sort(nums.begin() , nums.end()) ;

        for(int i=0 ; i<n ;i++) {
            int curr = nums[i] ;

            if((i==0 || curr!=nums[i-1] )  && (i==n-1 || curr!=nums[i+1])) {
                count += curr ; 
            }
        }
        return count ; 
    }
};