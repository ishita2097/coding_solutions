class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        map<int,int> element_count;
        int size_nums = nums.size(), min_moves = 0, extra;
        element_count[nums[0]]++;
        for(int i = 1; i < size_nums; i++){
            // cout<<nums[i]<<endl;
            if(nums[i] > (element_count.rbegin())->first)
                element_count[nums[i]]++;
            else{
                extra = (element_count.rbegin())->first - nums[i] + 1;
                element_count[nums[i] + extra]++;
                // cout<<"for i="<<i<<"extra="<<extra<<endl;
                min_moves += extra;
            }
        }   
        return min_moves; 
    }
};