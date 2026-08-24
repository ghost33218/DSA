class Solution {
public:
    bool isSubstringPresent(string s) {
        string snew = s ; 
         reverse(s.begin() , s.end()) ; 
        int n = s.length() ; 
        int windowLen = 2 ; 
        for(int i=0 ; i<n ; i++) {
          int windowIndx = 0 ;  
          int idx = i ; 
          string check = "" ;
          while( i<n && windowIndx < windowLen  ) {
             check += snew[idx] ; 
             idx++ ; 
             windowIndx++ ;  
          }
          if(s.find(check) < n) {
            return true ; 
          }
        }

        return false ; 
    }
};