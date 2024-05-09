class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {

        sort(happiness.begin(), happiness.end(), greater<int>());
        long long max_happiness = 0;
        for(int i=0;i<k;i++){
            int act_happiness = happiness[i]-i;
            if(act_happiness > 0)
               max_happiness +=  act_happiness;  
        } 
        return  max_happiness; 
    }
};