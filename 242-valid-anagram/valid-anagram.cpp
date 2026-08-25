class Solution {
public:
    bool isAnagram(string s, string t) {
        int chars[26] = {0} ;
        int chart[26] = {0} ;
        int n = s.length() ;
        int n2 = t.length() ;
        int idx , idx1 ;
        if(n!=n2) {
            return false ; 
        }

        for(int i=0 ; i<n ; i++) {
            idx = s[i] - 'a' ; 
            idx1 = t[i] - 'a' ;
            chars[idx]++ ;
            chart[idx1]++ ;

        }
        for(int i=0 ;i<26 ;i++) {
          if(chars[i] != chart[i]) {
            return false ;
          }
        }
        return true ; 
        
    }
};