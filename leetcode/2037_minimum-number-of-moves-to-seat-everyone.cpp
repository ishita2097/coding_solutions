    class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        int num_stu = students.size(), min_moves = 0;
        for(int i = 0; i < num_stu; i++){
            min_moves += abs(students[i] - seats[i]);    
        }

        return min_moves;    
    }
};