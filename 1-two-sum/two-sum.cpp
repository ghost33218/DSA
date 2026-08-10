class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        unordered_map <int , int> m ;
        vector <int> ans ; 
        for(int i=0 ; i<n.size() ; i++) {
            int first = n[i] ; 
            int second = target - first ; 

            if(m.find(second) != m.end()) {
                ans.push_back(i) ; 
                ans.push_back(m[second])  ;
                break ; 
            }
            m[first] = i ; 
            // key value pair  

        }
        return ans ; 
    }
};