class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size() ; 
        int count = 0 ; 
        bool ans = true  ; 
        if(word[0] >= 'A' && word[0] <= 'Z') {
             count++ ; 
             ans = true ; 
           }
        for(int i=1 ; i<n ; i++) {
           if(word[i] >= 'A' && word[i] <= 'Z') {
             count++ ; 
             ans = false ; 
           }
        }

        if(count == word.length()) {
            return true ; 
        }

        return ans ; 


    }
};