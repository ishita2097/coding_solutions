class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int boatCount = 0;
        for (int l = 0, r = people.size() - 1; l <= r; r--) {
            if (people[r] + people[l] <= limit) {
                l++;
            }
            boatCount++;
        }
        return boatCount;
    }
};