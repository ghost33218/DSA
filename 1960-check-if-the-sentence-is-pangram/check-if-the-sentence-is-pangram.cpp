class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.length() ; 

        if (n < 26) {
            return false ; 
        } 

        int alph[26] = {0} ;

        for(int i=0 ; i<n ; i++) {
            int idx = sentence[i] - 'a' ;
            alph[idx] = 1 ; 
        }
        for(int i=0 ; i<26 ; i++) {
            if(alph[i] == 0) {
                return false ;
            }
        }
        return true ; 
    }
};