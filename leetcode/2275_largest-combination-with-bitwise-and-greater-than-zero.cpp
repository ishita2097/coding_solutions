class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int> setbit_count;
        int count = 0, set_bit;
        for(int bit_pos = 0; bit_pos < 32; bit_pos++){
            count = 0;
            set_bit = 1;
            set_bit <<= bit_pos;
            for(int candidate: candidates){
                if((candidate & set_bit) != 0)
                    count++;
            }
            setbit_count.push_back(count);
        }
        return *max_element(setbit_count.begin(), setbit_count.end());
    }
};