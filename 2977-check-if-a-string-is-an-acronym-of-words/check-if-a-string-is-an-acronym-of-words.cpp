class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n = words.size() ;
         string check = "" ;
        for(int i=0 ; i<n ; i++) {
           check += words[i][0]   ;
        }


        if(s.length() == check.length()) {
            for(int i=0 ; i<s.length() ; i++) {
                if(s[i] != check[i]) {
                    return false ;
                }
            }
            return true ;
        }

        return false ; 

        
    }
};