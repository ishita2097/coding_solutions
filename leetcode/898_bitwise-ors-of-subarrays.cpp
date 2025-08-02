class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        int len = arr.size();
        unordered_set<int> seen_bitwiseor, result, curr_bitwiseor;
        for(int i=0;i<len;i++){
            curr_bitwiseor.insert(arr[i]);
            for(int seen: seen_bitwiseor){ // at max 32 possibilities -- see below
                result.insert(arr[i] | seen);
                curr_bitwiseor.insert(arr[i] | seen);
            }
            result.insert(arr[i]);
            seen_bitwiseor=curr_bitwiseor;
            curr_bitwiseor.clear(); 
        } 
        return result.size(); 
    }
};


/*
TC: O(32n)  ----linear
Everytime we do bitwise OR, either the resultant bitwise OR increases or remains same. 
For an int value, we have 32 bits so max 32 posssible distinct bitwiseOR possible.
worst scenario where after performing bitwise or only one bit is set --- like this 32 possibilities.
*/