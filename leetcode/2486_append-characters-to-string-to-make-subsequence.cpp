class Solution {
public:
    int appendCharacters(string s, string t) {
        int len_t = t.size(), len_s = s.size(), j = 0;
        for(int i = 0; i < len_s && j < len_t;){
            if(s[i] == t[j]){
                i++, j++;
            }
            else
                i++;
        }
        return (len_t - j);     
    }
};