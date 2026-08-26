class Solution {
public:
    int fib(int n) {
        if(n==1 || n==0) {
            return n ;
        }
        int first_num = 0 ;
        int sec_num = 1 ; 
        int num ;

        for(int i=2 ; i<=n ;i++) {
          num = first_num + sec_num ; 
          first_num = sec_num ;
          sec_num = num ; 
        } 

        return num ; 
    }
};