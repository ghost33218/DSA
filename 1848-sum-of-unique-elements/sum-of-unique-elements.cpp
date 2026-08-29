class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
            
     sort(nums.begin() , nums.end()) ; 
     int n = nums.size() ;
     int count = 0 ;
  
     for(int i=0 ; i<n ; i++) {
        int curr = nums[i] ; 
        int flag = 0 ; //assuming it is unique 
         i++ ;
        while(i< n && curr==nums[i]) { 
            flag = 1 ; 
            i++ ; 
        }
        if(flag == 0) {
            count += curr ;
        }
        i-- ; 

     }
     return count ; 
    }
};