class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size() ; 
        int alp[26] = {0} ; 

        for(int i=0 ; i<n ; i++) {
            int idx = letters[i] - 'a' ; 
            alp[idx] = 1 ; 
        } 
        for(int i=0 ; i<26 ; i++) {
            if(i + 'a'> target && alp[i]==1) {
                return (i+'a') ; 
            }
        } 

        return letters[0] ; 
    }
};