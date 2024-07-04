class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int size_arr = arr.size(), count = 0;
        for (int i = 0; i < size_arr; i++) {
            if (arr[i] & 1 == 1)
                count++;
            else
                count = 0;
            if (count == 3)
                return true;
        }
        return false;
    }
};