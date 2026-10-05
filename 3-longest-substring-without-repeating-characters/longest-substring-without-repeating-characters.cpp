class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0 ;
        int r = 0 ;
        int maxl = 0 ;
        unordered_set<char> m; 
        int n = s.length() ;

        while(r < n) {
           if(m.find(s[r]) == m.end()) {
              m.insert(s[r]) ; 
              r++ ; 
              maxl = max (maxl , r-l) ; 
           }
           else {
            m.erase(s[l]) ; 
            l++ ; 

           }
        }

        return maxl ; 
    }
};