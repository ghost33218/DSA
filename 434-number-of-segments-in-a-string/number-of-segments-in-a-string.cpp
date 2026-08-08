class Solution {
public:
    int countSegments(string s) {
        int count = 0 ; 
         
        for(int i=0 ; i<s.length() ; i++) {
            string word = "" ;
            while( i<s.length() && s[i]!=' ') {
                word += s[i] ; 
                i++ ; 
            
            }
            if(word.length() > 0) {
                  count ++ ; 
                  }

          
        }
        
        return count ; 
    }
};