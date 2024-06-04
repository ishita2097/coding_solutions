class Solution {
public:
    int longestPalindrome(string s) {
        int s_size = s.size(), len_max_palin = 0;
        bool odd_count = false;
        unordered_map<char,int> umap;
        for(int i = 0; i < s_size; i++)
            umap[s[i]]++;

        for(auto i : umap){
            cout<<i.first<<i.second<<endl;
            if(i.second % 2 == 0)
                len_max_palin += i.second;
            else{
                odd_count = true;
                len_max_palin += (i.second - 1);
            }
        }

        return odd_count ? len_max_palin+1: len_max_palin;
    }
};