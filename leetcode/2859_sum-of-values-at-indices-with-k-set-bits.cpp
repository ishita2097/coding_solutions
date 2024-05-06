class Solution {
public:
    int k_set_bits(int idx){
        int set_bit_count=0;

        while(idx){
            set_bit_count+=(idx & 1);
            idx = idx>>1;
        }
        return set_bit_count; 
        
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(k_set_bits(i)==k){
                sum+=nums[i];
            }
        }  
        return sum;  
    }
};