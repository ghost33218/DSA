class Solution {
public:
    bool isSameAfterReversals(int num) {
        // there ia pattern the answer false will only come when the ending digits are 0 except 0 
        // 12300 -> 00321 321 -> 123 FALSE
        // 0 -> 0 -> 0 TRUE
        // 1234 -> 4321 -> 1234 TRUE 

        if(num%10 != 0 || num == 0) {
            return true ;
        }
        return false ; 

        // time complexity 0(1)
    }
};