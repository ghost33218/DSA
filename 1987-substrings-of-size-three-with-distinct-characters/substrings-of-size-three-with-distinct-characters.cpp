class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size() ; 
        int ans = 0 ;

        for(int i=0 ; i<n-2 ; i++) {
            int alp[26] = {0} ;
            int idx = i ; 
            int wind = 0 ;
            while(idx < n && wind<3) {
                int l = s[idx] - 'a' ; 
                alp[l] ++ ;
                idx++ ;
                wind++ ; 
            } 
            ans++ ; 
            for(int i=0 ; i<26 ; i++) {
                if(alp[i] > 1) {
                    ans-- ; 
                    break ;
                }
            }
        }
        return ans ; 
    }
};