class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected(heights);
        sort(expected.begin(), expected.end());
        int mismatch = 0, size_h = heights.size();
        for(int i = 0; i < size_h; i++){
            if(expected[i] != heights[i])
                mismatch++;
        }
        return mismatch;    
    }
};