class Solution {
public:
    string reversePrefix(string word, char ch) {
        int first_occur = word.find(ch);
        char temp;
        // cout<<first_occur;
        for(int i = 0, j = first_occur; i < j; i++, j--){
            temp = word[i];
            word[i] = word[j];
            word[j] = temp;
        }
        return word;    
    }
};