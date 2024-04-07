class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=0,i=-1,curr_cap=capacity;
        int plants_num=plants.size();
        while(i<(plants_num-1)){
            if (curr_cap<plants[i+1]){
                curr_cap=capacity;
                steps+=(i+1)*2;
            }
            curr_cap-=plants[i+1];
            steps+=1;
            i++;
        } 
        return steps;   
    }
};