/*******************************
https://www.naukri.com/code360/problems/palindrome-permutation_1171180?leftPanelTabValue=PROBLEM
********************************/
#include <bits/stdc++.h> 
bool palindromeString(string s) {
    // Write your code here.
    map<char,int> char_count;
    for(char c:s){
        char_count[c]++;
    }
    int count_odd_occur=0;
    for(auto it=char_count.begin();it!=char_count.end();it++){
        if ((it->second) & 1) { // odd occurence of a char
            count_odd_occur++;
        }
    }

    return count_odd_occur<=1;
}