class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0) {
            return false ; 
        }

        int rev = 0 ;
        int x1 = x ; 

        while(x != 0) {
            int digit = x%10 ; 
            if (rev < INT_MIN/10 || rev>INT_MAX/10) {
                return  false ;
            }
            rev = (rev*10) + digit ; 
            x = x/10 ; 
        } 

        if(x1 == rev) {
            return true ; 
        }
        return false ; 
        
    }
};