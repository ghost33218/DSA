class Solution {
public:
    bool isSubstringPresent(string s) {
        int n = s.length() ; 
        unordered_set <string> st ; 

        for(int i=0 ; i<n-1 ; i++) {
            st.insert(s.substr(i , 2)) ;
         }

         for(int i=0 ; i<n-1 ; i++) {
            string rev = s.substr(i,2) ; 
            swap(rev[0] , rev[1]) ; 

            if(st.find(rev) != st.end()) {
                return true ;
            }
         }
         return false ; 
    }
};