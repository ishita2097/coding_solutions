class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        string positions[3] = {"Gold Medal","Silver Medal","Bronze Medal"};

        vector<int> score_sorted_desc(score);
        sort(score_sorted_desc.begin(), score_sorted_desc.end(), greater<int>());

        vector<string> answer;
        auto sorted_beg = score_sorted_desc.begin();
        auto sorted_end = score_sorted_desc.end();
        for(auto it=score.begin();it<score.end();it++){
            int index = find(sorted_beg, sorted_end,*it) - sorted_beg;

            if(index<3)
                answer.push_back(positions[index]);
            else
                answer.push_back(to_string(index+1));
        }
        return answer;
    }
};