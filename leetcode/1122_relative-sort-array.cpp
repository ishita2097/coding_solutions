class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> eleFreq;
        int size_a1 = arr1.size(), size_a2 = arr2.size();
        for(int i = 0; i < size_a1; i++){
            eleFreq[arr1[i]]++;
        }   
        int start_pos = 0, curr_pos = 0; 
        for(int i = 0; i < size_a2; i++){
            while(curr_pos < start_pos + eleFreq[arr2[i]]){
                arr1[curr_pos++] = arr2[i];
            }
            eleFreq.erase(arr2[i]);
            start_pos = curr_pos;
        }
        if(eleFreq.size() != 0){
            for(auto it: eleFreq){
                while(it.second){
                    // cout<<curr_pos<<" "<<it.first<<" "<<it.second<<endl;
                    arr1[curr_pos++] = it.first;
                    it.second = it.second - 1;
                } 
            }
        }
        return arr1;
    }
};