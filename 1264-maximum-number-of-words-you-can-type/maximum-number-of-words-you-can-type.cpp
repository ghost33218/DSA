class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int n = text.length() ; 
        int ans=0 ;

        for(int i=0 ; i<n ; i++) {
            string word = "" ;
            while(i<n &&  text[i]!= ' ') {
               word += text[i] ; 
               i++ ;
            }
            ans ++ ;
            for(int j=0 ; j<brokenLetters.length() ; j++) {
            if(word.find(brokenLetters[j]) < word.length() ) {
                ans-- ; 
                break ;
            } 
          
            }
        }

        return ans ;
        
    }
};