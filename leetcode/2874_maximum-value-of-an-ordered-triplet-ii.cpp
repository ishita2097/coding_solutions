/********** Best solution********
Time Complexity: O(n)
Space Complexity: O(1)
*********************************/
class Solution {
    public:
        long long maximumTripletValue(vector<int>& nums) {
            long long res =0;
            int size=nums.size();
            int maxdiff = 0, maxi=nums[0];
            for(int k=1; k<size; k++){
                res=max(res,(long long)maxdiff*nums[k]);
                maxdiff=max(maxdiff,maxi-nums[k]);
                maxi=max(maxi,nums[k]);
            }    
            return res;
        }
    };


/***************************
Solution 2:
Time Complexity: O(n)
Space Complexity: O(n)
****************************/
// class Solution {
//     public:
//         long long maximumTripletValue(vector<int>& nums) {
//             int size = nums.size();
//             vector<int> maxi(size), maxk(size); //initializes the two vectors with default value 0
//             for (int j = 1; j < size; j++) {
    
//                 // maximum seen from [0,j) for deciding maximum nums[i]
//                 maxi[j] = max(maxi[j - 1], nums[j - 1]);
    
//                 // maximum seen from (j, size) for deciding maximum nums[k]
//                 maxk[size - 1 - j] = max(maxk[size - j], nums[size - j]);
//             }
    
//             long long res = 0;
//             for (int j = 0; j < size; j++) {
//                 res = max(res, (long long)(maxi[j] - nums[j]) * maxk[j]);
//             }
    
//             return res;
//         }
//     };