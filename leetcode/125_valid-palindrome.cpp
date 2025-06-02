class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0, j = s.length()-1; i<j;){
            // i<j is necessary in line# 6&7 to ensure i++ or j-- doesn't cross the limits
            while(!isalnum(s[i]) && i<j) i++;
            while(!isalnum(s[j]) && i<j) j--;
            if(tolower(s[i]) == tolower(s[j])){
                i++;
                j--;
            }
            else
                return false;
        }    
        return true;
    }
};




/************ using ASCII values **************/
class Solution {
public:
    int checkAlphaNumeric(int a){
        if((a>=65 && a<=90) || (a>=97 && a<=122))
            return 0;
        else if(a>=48 && a<=57)
            return 1;
        return 2;
    }
    bool isPalindrome(string s) {
        int i = 0, j = s.size()-1;
        while(i<j){
            if(checkAlphaNumeric((int)s[i])==2){
                i++;
                continue;
            }
            else if(checkAlphaNumeric((int)s[j])==2){
                j--;
                continue;
            }
            else if(s[i]==s[j] || ((int)s[i] == (int)s[j] + 32) || ((int)s[i] == (int)s[j] - 32)){
                if(checkAlphaNumeric((int)s[i])==1 && checkAlphaNumeric((int)s[i])==1){
                    
                }
                i++;
                j--; 
                continue;
            }
            else
                return false;
        }
        
        return true;    
    }
};