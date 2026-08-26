class Solution {
public:
    int maximumCount(vector<int>& nums) {
        
        int countp = 0 ; 
        int countn = 0 ; 
        int n = nums.size() ;

        for(int i=0 ; i<n ; i++) {
            if(nums[i] < 0) {
                countn++ ; 
            } 
            else if (nums[i] > 0) {
                countp++ ; 
            }
        }

        if(countp >= countn) {
            return countp ;
        }
        else {
            return countn ;
        }
    }
};