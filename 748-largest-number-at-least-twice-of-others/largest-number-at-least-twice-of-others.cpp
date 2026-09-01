class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int largest = INT_MIN ;
        int second = INT_MIN ; 
        int l ; 
        int n = nums.size() ;
      
        for(int i=0 ; i<n ; i++) {
            if(nums[i] >= largest) {
                largest = nums[i] ;
                l = i ;
            }
        }
        
        for(int i=0 ; i<n ; i++) { 
            if(nums[i] < largest && nums[i] >= second ) {
                second = nums[i] ;
            }

        }

        if(largest >= 2*second) {
            return l ; 
        }

        return -1 ;
    }
};