class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size_nums = nums.size();
        map<int,int> balls_freq;
        for(int i = 0; i < size_nums; i++)
            balls_freq[nums[i]]++;
        
        int i = 0;    
        for(auto it: balls_freq){
            while(it.second-- != 0)
                nums[i++] = it.first;
        } 
    }
};