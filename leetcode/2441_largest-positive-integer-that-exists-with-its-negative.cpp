class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0, j = nums.size()-1; i<j; ){
            cout<<nums[i]<<endl;
            if(abs(nums[i]) > abs(nums[j]))
                i++;
            else if(abs(nums[i]) < abs(nums[j]))
                j--;
            else if(nums[i] * -1 == nums[j])
                return abs(nums[i]);
            else
                i++, j--;
        }    
        return -1;
    }
};