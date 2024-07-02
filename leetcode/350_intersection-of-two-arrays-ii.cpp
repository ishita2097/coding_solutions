class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int size1 = nums1.size(), size2 = nums2.size();
        vector<int> results;
        for(int i = 0, j = 0; i < size1 && j < size2;){
            if(nums1[i] == nums2[j]){
                results.push_back(nums1[i]);
                i++, j++;
            }
            else if(nums1[i] < nums2[j])
                i++;
            else
                j++;
        }    
        return results;
    }
};