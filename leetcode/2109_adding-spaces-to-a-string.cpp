class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int len = s.length(), len_spaces= spaces.size();
        int new_len = len+len_spaces;
        s.resize(new_len);
        for(int o = len-1, n = new_len-1, s_ = len_spaces-1; s_ >= 0;  ){
            s[n] = s[o];
            if(o==spaces[s_]){
                s[n-1] = ' ';
                n  = n-2;
                s_--;
            }
            else
                n--;
            o--;
        }
        return s;

    }
};