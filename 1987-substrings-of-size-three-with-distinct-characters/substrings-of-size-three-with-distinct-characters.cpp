class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.length() ;
        int windowsize = 3 ;
        int ans  = 0 ;

        for(int i=0 ; i<n-2 ; i++) {
            int idx = i ; 
            int wind = 0 ; 
            string ch = "" ;
            while(idx<n && wind<windowsize){
              ch += s[idx] ;
              idx++ ; 
              wind++ ; 
            } 
            ans++ ; 
            int alph[26] = {0} ; 
            if(ch.length() == 3) {
                for(int i=0 ; i<3 ; i++) {
                    int idx = ch[i] - 'a' ; 
                    alph[idx]++ ;
                }
                for (int i=0 ; i<26 ; i++) {
                    if(alph[i] > 1) {
                        ans-- ; 
                        break ; 
                    }
                }
            }
        }
        return ans ; 
    }
};