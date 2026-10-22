class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length() ; 
        int l = t.length() ; 

        if(n!=l){
            return false ;
        }
        unordered_map<char,char> m ; 

        for(int i=0 ; i<n ; i++) {
             if(m.find(s[i]) == m.end()) {
                m[s[i]] = t[i] ;
             } 
             else {
                if(m[s[i]] == t[i]) {

                }
                else {
                    return false ;
                }
             }
        }

        unordered_map<char,char> m1 ; 

        for(int i=0 ; i<n ; i++) {
             if(m1.find(t[i]) == m1.end()) {
                m1[t[i]] = s[i] ;
             } 
             else {
                if(m1[t[i]] == s[i]) {

                }
                else {
                    return false ;
                }
             }
        }
        return true  ;
    }
};