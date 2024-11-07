class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int len = nums.size();
        bool pass = true;
        for(int i = 0; i < len; i++){
            for(int j = 0; j < len-1-i; j++){
                if(nums[j] > nums[j+1]){
                    pass = false;
                    if(__builtin_popcount(nums[j]) == __builtin_popcount(nums[j+1])){
                        swap(nums[j], nums[j+1]);
                    }
                    else
                        return false;
                }
            }
            if(pass)
                break;
        } 
        return true;   
    }
};