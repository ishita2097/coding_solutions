class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int xor_ = 0;
        for(int num: nums)
            xor_ ^= num;
        
        vector<int> results;
        int power = ((int)(pow(2,maximumBit) + 0.5));
        for(int i=(nums.size())-1; i>=0; i--){
            results.push_back(power - 1 - xor_);
            xor_ ^= nums[nums.size()-1];
            nums.pop_back();
        }
        return results;
    }
};