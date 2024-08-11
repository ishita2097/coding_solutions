class Solution {
public:
    int countSeniors(vector<string>& details) {
        int num_passengers_gt_60 = 0, age;
        for(string detail:details){
            age = stoi(detail.substr(11,2));  
            if(age > 60)
                num_passengers_gt_60++;
        }
        return num_passengers_gt_60; 
    }
};