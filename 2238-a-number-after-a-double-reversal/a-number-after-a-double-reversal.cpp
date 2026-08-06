class Solution {
public:
    bool isSameAfterReversals(int num) {
        int nums = num ; 
        int rev = 0 ; 
        while(num != 0) {
            int digit = num%10 ; 
            rev = (rev*10) + digit ;
            num = num/10 ;  
        }

        int rev2 = 0  ;
        while(rev != 0) {
            int digit = rev%10 ; 
            rev2 = (rev2*10) + digit ;
            rev = rev/10 ;  
        }

        if(nums == rev2) {
            return true ; 
        }
        
        return false ; 
    }
};