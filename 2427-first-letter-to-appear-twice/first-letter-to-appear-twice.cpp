class Solution {
public:
    char repeatedCharacter(string s) {
        char alp[26] = {0} ; 
        int n = s.length() ; 

        for(int i=0 ; i<n ; i++) {
            int l = s[i] - 'a' ; 
            alp[l]++ ; 
            if(alp[l] == 2) {
                return s[i] ; 
            }
        }
        return -1 ; 
    }
};