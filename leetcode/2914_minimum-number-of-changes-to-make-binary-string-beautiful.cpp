class Solution {
public:
    int minChanges(string s) {
        int count = 0, s_len = s.length();
        for(int i=0; i<(s_len-1); i=i+2){
            if(s[i]!=s[i+1])
                count++;
        }   
        return count; 
    }
};