class Solution {
public:
    string finalString(string s) {
        int n = s.length() ; 
        
        for(int i=0 ; i<s.length() ; i++) {

            if(s[i] == 'i') {
               
                int st = 0 ; 
                int end = i-1 ; 
                while(st < end) {
                    swap(s[st] , s[end]) ; 
                    st++ ;
                    end-- ; 
                }
                 s.erase(i , 1) ; 
                 i-- ; 

            }
        }
        return s ; 
    }
};