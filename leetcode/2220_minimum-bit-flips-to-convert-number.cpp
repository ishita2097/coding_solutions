class Solution {
public:
    int minBitFlips(int start, int goal) {
        int start_xor_goal = start ^ goal;
        int bitflips=0;
        while(start_xor_goal){
            if(start_xor_goal&1)
                bitflips++;
            start_xor_goal = start_xor_goal>>1;
        } 
        return bitflips;   
    }
};