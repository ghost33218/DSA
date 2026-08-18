class Solution {
public:
    string capitalizeTitle(string title) {
        int l = title.length() ; 
        string ans = "" ; 

        for(int i=0 ; i<l ; i++) {
            string word = "" ; 
            while(i<l && title[i] != ' ' ) {
               word += title[i] ; 
               i++ ;
            } 

            if(word.length() == 1 ||  word.length() == 2) {
                string word1 = "" ; 
               for(char ch : word) {
                 word1 += tolower(ch) ; 
               }
                ans += " " + word1 ; 
            } 
            else {
                 string word1 = "" ; 
                for(char ch : word) {
                 word1 += tolower(ch) ; 
               }
              
                word1[0] = toupper(word1[0]) ; 
                ans += " " + word1 ; 
            }


        }
        return ans.substr(1) ; 
    }
};