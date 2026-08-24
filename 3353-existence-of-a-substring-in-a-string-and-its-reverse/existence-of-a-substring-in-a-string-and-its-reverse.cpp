class Solution {
public:
    bool isSubstringPresent(string s) {
        int n = s.length() ; 
        unordered_set<string> s1  ; 
        for(int i=0 ; i<n-1 ; i++) {
           int idx = i ; 
           int windsize = 0 ; 
           string check = "" ;
           while(idx<n && windsize<2 ) {
              check += s[idx] ; 
              idx++ ; 
              windsize++ ; 
           } 
           s1.insert(check) ;
        }

        reverse(s.begin() , s.end()) ; 
        for(int i=0 ; i<n-1 ; i++) {
            int idx = i ; 
            int windsize = 0 ;
            string check = "" ; 
            while(idx<n && windsize<2) {
                 check += s[idx] ; 
                 idx++ ; 
                 windsize++ ; 
            }
            if(s1.find(check) != s1.end()) {
                return true ; 
            } 
        }
        return false ; 
        
    }
};