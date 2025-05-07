class Solution {
    public:
        int reverse(int x) {
            if(x==0)
                return 0;
            int revNum = 0;
            
            while(x!=0) {
                /*If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0*/
                if(revNum > numeric_limits<int>::max()/10 || revNum < numeric_limits<int>::min()/10)
                    return 0;
    
                revNum = (revNum * 10 + (x % 10));
                x = x / 10;
            }
    
            return revNum;
        }
    };