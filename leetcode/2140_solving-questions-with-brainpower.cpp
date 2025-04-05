class Solution {
    public:
        long long mostPoints(vector<vector<int>>& questions) {
            int tot_num_of_ques = questions.size();
            // array that will store max points that can be earned if started on qi
            long long max_pts_arr[tot_num_of_ques];
            int nxt;
    
            max_pts_arr[tot_num_of_ques - 1] = questions[tot_num_of_ques - 1][0];
            for (int q_num = tot_num_of_ques - 2; q_num >= 0; q_num--) {
                nxt = q_num + questions[q_num][1] + 1;
                max_pts_arr[q_num] =
                    nxt < tot_num_of_ques
                        ? max((questions[q_num][0] + max_pts_arr[nxt]),
                              max_pts_arr[q_num + 1])
                        : max((long long)questions[q_num][0], max_pts_arr[q_num + 1]); 
                        /*questions[q_num][0]had to be typecasted to long long because max expects both the args to be of same type
                        The earlier one didnt require one because on addition the result was long long*/
            }
            return max_pts_arr[0];
        }
    };