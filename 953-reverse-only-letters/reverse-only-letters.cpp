class Solution {
public:
    bool isAlpha(char ch) {
        if((tolower(ch)>='a' && tolower(ch)<='z')) {
            return true ; 
        }
        return false ; 
    }
    string reverseOnlyLetters(string s) {
        int n = s.length() ; 
        int st = 0 ; 
        int end = n-1 ; 

        while(st < end) {
            if(!isAlpha(s[st])) {
                st++ ; 
                continue ; 
            }
            else if(!isAlpha(s[end])) {
                end-- ; 
                continue ; 
            } 
            else {
                swap(s[st] , s[end]) ;
                st++ ;
                end-- ; 
            }

        }
        return s ; 
    }
};