class Solution {
    public:
        bool canPartition(vector<int>& nums) {
            int sum = 0, target;
            for(int a: nums)
                sum += a;
            if(!(sum%2)){ 
                target = sum/2;
                int s = nums.size();
                vector<vector<bool>> dp(s, vector<bool>(target+1,false));
                for(int r = 0; r<s; r++)
                    dp[r][0] = true;
                if(nums[0] == target)
                    dp[0][nums[0]] = true;
                for(int r = 1; r<s; r++){
                    if(nums[r] > target)
                        continue;
                    for(int c=1; c <= target; c++){
                        // cout<<r<<" "<<c<<" "<<c-nums[r]<<endl;
                        dp[r][c] = (c-nums[r]) >= 0 ? dp[r-1][c] || dp[r-1][c-nums[r]] : dp[r-1][c];
                    }
                }
                return dp[s-1][target];
            }
            // if sum is odd, there is no way it can be partitioned into two subsets with equal sum
            return false;   
        }
    };