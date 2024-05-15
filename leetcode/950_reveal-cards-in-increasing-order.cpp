class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end(), greater<int>()); 
        vector<int> results{deck[0]};
        int val; 
        for(int i=1;i<deck.size();i++){
            for(int j=0;j<results.size()-1;j++){
                val = results[0];
                results.erase(results.begin());
                results.push_back(val);
            }
            results.insert(results.begin(), deck[i]);
        }
        return results;
    }
};