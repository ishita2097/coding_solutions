class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int num_subsets =  (1<<n);
        vector<vector<int>> ans;
        vector<int> temp;
        for(int i = 0; i < num_subsets; i++){
            for(int j = 0; j < n; j++){
                if(i & (1<<j))
                    temp.push_back(nums[j]);    
            }
            ans.push_back(temp);
            temp.clear();    
        }
        return ans;    
    }
};