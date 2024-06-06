class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int size = hand.size();
        if((size % groupSize != 0) || (size < groupSize))
            return false;
        sort(hand.begin(), hand.end());
        int curr, count=0;
        for(int i = size - 1; i >= 0; i--){
            if(count%groupSize == 0){
                curr = hand[size - 1];
                count = 1;
                hand.pop_back();
                i = hand.size();
                // i = size - 1;
            }
            else{
                if(hand[i] == curr)
                    continue;
                else if(hand[i] == curr - 1){
                    curr = hand[i];
                    count++;
                    hand.erase(hand.begin() + i);
                    // i = size - 1;
                }
                else
                    return false;
            }
            size = hand.size();
            // cout<<curr<<endl;
        } 
        if(hand.size() == 0)
            return true;
        else
            return false; 
    }
};