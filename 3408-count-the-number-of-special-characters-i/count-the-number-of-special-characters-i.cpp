class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.length() ; 
        int chara[26] = {0} ;
        int charA[26] = {0} ; 
        int count = 0 ;

        for(int i=0 ; i<n ;i++) {
           if(word[i] >= 'a' && word[i]<='z') {
            int idx = word[i] - 'a' ; 
            chara[idx]++ ; 
           } 
           else {
            int idx = word[i] - 'A' ; 
            charA[idx]++ ; 
           }
        }
        for(int i=0 ; i<26 ; i++) {
            if(chara[i] >= 1 && charA[i] >= 1) {
                count++ ; 
            }
        }
        return count ; 
    }
};