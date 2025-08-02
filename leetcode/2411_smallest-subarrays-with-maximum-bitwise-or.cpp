class Solution {
public:
    /*bitwise OR property: bitwise OR is monotonically non-decreasing. As we tend to add more elements 
    to the subarray for bitwise OR, the resultant bitwise OR of the new subarray either increases or remains same*/
    vector<int> smallestSubarrays(vector<int>& nums) {
        vector<int> setbit_pos(32, -1);
        int len = nums.size(), max_pos = 0;
        vector<int> ans(len);
        for (int i = len - 1; i >= 0; i--) {
            max_pos=i;
            for (int j = 0; j < 32; j++) {
                if (nums[i] & (1 << j)) {
                    setbit_pos[j] = i;
                }
                max_pos = max(max_pos, setbit_pos[j]);
            }

            ans[i] = (max_pos - i) + 1;
        }
        return ans;
    }
};