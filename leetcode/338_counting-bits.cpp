class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> results;
        int power_of_two;
        results.push_back(0);
        if(n>=1)
           results.push_back(1); 
        for(int i=2;i<=n;i++){
            if((i&(i-1))==0){ // power of 2
                results.push_back(1);
                power_of_two = i;
            } 
            else{
                results.push_back(1+results[i%power_of_two]); 
            }
        }
        return results;
    }
};