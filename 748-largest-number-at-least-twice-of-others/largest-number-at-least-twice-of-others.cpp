class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        //TC 0(n)
        int largest = INT_MIN ; 
        int second = INT_MIN ; 
        int n = nums.size() ; 
        int l ;

        for(int i =0 ; i<n ; i++) {
            if(nums[i] > largest) {
                second = largest ; 
                largest = nums[i] ; 
                l=i ; 
            }
            else if(nums[i] > second) {
                second = nums[i] ;
            }
        }

        if(largest >= 2*second) {
            return l ;
        }
        return -1 ; 
        
    }
};