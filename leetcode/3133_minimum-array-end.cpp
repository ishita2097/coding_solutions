class Solution {
public:
    long long minEnd(int n, int x) {
        int count = 1;
        long y = x;
        while(count < n){
            y = x | (y+1);
            count++;
        }
        return y;   
    }
};