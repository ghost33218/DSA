class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.length() ; 

    

        int alph[26] = {0} ;
        int count = 0 ; 

        for(int i=0 ; i<n ; i++) {
            int idx = sentence[i] - 'a' ;
           
           if( alph[idx] == 0 ) {
            alph[idx] = 1 ; 
            count ++ ;
           }
        }

        if(count == 26) {
            return true ;
        }
        else  {
            return false ; 
        }
  
    }
};