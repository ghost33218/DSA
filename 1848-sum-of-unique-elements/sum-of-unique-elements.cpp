class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size() ; 
        int count = 0 ;

        for(int  i=0 ; i<n ; i++) {
            int flag = 0 ;  //assume the number is unique 
            for(int j=0 ; j<n ; j++) {
                if(nums[i] == nums[j] && i!=j) {
                    flag = 1 ; 
                    break ; 
                }
            } 
            if(flag == 0) {
                count += nums[i] ; 
            }
        }return count ; 
    
    }
};