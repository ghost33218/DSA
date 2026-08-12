class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.length() ; 
        int target = -1 ; 
        for(int i=0 ; i<n ; i++ ) {
            for(int j= i+1 ; j<n ; j++) {
                if(s[i] == s[j]) {
                  int l = j-i-1 ; 
                  target = max(l , target) ; 
                }
            }
        }
        return target ; 
    }
};