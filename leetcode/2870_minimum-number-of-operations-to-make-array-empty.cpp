class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> umap; 
        for(auto n:nums)
            umap[n]++;

        int op=0;
        for(auto it:umap){
            if(it.second==1)
                return -1;
            op+=ceil(double(it.second)/3);
        }  
        return op; 
    }
};