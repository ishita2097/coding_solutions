class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int length = nums.size();
        int max_or = 0, subset_count = 0, int_max_or=0;
        for (int i = 0; i < (1 << length); i++) { // to get all subsets
            int_max_or =0;
            for(int j=0;j<length;j++){
                if(i & (1<<j)){
                    int_max_or = int_max_or | nums[j];
                }
            }
            if(int_max_or > max_or){
                max_or=int_max_or;
                subset_count=1;
            }
            else if(int_max_or == max_or)
                subset_count++;
        }
        // cout<<"Max bitwise OR:"<<max_or<<endl;
        return subset_count;
    }
};