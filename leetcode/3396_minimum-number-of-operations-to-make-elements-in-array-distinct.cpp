class Solution {
    public:
        int minimumOperations(vector<int>& nums) {
            int tot_num = nums.size(), idx;
            unordered_map<int, int> umap;
            for(idx = tot_num - 1; idx >= 0; idx--){
                if(umap.find(nums[idx]) == umap.end())
                    umap[nums[idx]] = 1;
                else
                    break;
            }
            int min_opr = ceil((idx+1)/3.0);
    
            return min_opr;
        }
    };