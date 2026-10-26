class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int , int> m ; 
        int n = numbers.size() ; 
        vector<int> ans ; 

        for(int i=0 ; i<n ; i++) {
            int sec = target - numbers[i] ; 
            if(m.find(sec) == m.end()) {
                m[numbers[i]] = i+1 ; 
            }
            else {
               
                return{m[sec] , i+1 } ; 
            }
        } 
        return{} ;  
        
    }
};