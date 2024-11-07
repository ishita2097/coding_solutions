class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        char c = word[0];
        int count = 0;
        for(char w: word){
            if(w == c && count < 9){
                count++;
                continue;
            }
            comp += to_string(count) + c;
            c = w;
            count = 1;
        } 
        comp += to_string(count) + c;
        return comp;
    }
};