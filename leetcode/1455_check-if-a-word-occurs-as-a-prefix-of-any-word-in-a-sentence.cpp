class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int sen_len = sentence.length(), word_len = searchWord.length();
        bool found = false;
        int word = 1;
        for(int sen_pos=0; sen_pos < sen_len; sen_pos++){
            if(sentence[sen_pos] == ' ')
                word++;
            if((sen_pos == 0 || sentence[sen_pos-1] == ' ') && sentence[sen_pos] == searchWord[0]){
                found = true;
                for(int word_pos=1; word_pos < word_len; word_pos++){
                    if(sentence[sen_pos+word_pos] != searchWord[word_pos]){
                        found = false;
                        break;
                    }
                }
            }
            if(found)
                break;
        }
        if(!found)
            return -1; 
        return word;   
    }
};