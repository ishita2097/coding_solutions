class Solution {
public:
    bool judgeSquareSum(int c) {
        int sq_root = sqrt(c);
        int a;
        
        for(int b = sq_root; b >= 0; b--){
            a = sqrt(c - (b * b));
            if((int)a == ceil(a) && (a*a + b*b) == c)
                return true;
        }    
        return false;
    }
};