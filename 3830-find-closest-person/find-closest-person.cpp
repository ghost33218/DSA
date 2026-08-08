class Solution {
public:
    int findClosest(int x, int y, int z) {
        int x1 = z-x ; 
        int y1 = z-y ; 

        if(x1 < 0) {
            x1 = -x1 ; 
        }
        if(y1 < 0) {
            y1 = -y1 ;
    }

        if(x1 == y1) {
            return 0 ;
        }
        else if (x1 > y1) {
            return 2 ;
        }
        else {
            return 1 ; 
        }

    }
};