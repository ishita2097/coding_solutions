class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0, len = nums.size(), x = -1, seen = 0, left = len;
        while(i < len && nums[i] == 0)
            i++;
        for(; i < len; i++){
            left =  len - i;
            if(nums[i] == left && nums[i] != seen)
                return nums[i]; 
            if(left > seen && left < nums[i])
                return left; 
            seen = nums[i]; 
        }
        return x;
    }
};