class Solution {
public:

    int subsetXORSum(vector<int>& nums) {
        int n = nums.size(),  sum_of_xor=0, xor_total=0;
        for(int i=0;i<(1<<n);i++){
            xor_total=0;
            for(int j=0;j<n;j++){
                if((i&(1<<j))!=0){
                    xor_total^=nums[j];
                }
            }
            sum_of_xor+=xor_total;    
        }
        return sum_of_xor;   
    }
};