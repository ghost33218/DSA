class Solution {
public:
    int reverse(int x) {
        int digit = 0;
        int rn = 0 ; 

        while(x!=0) {
            digit = x% 10 ; 
            
            if(rn < INT_MIN/10 || rn >INT_MAX/10) {
                return 0 ; 

            }
            rn = (rn*10) + digit ;
            x = x/10 ; 
        } 
        return rn ; 
        
    }
};