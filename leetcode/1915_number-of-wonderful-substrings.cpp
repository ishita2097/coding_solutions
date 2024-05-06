class Solution {
public:
    long long wonderfulSubstrings(string word) {
        unordered_map<int, int> seen;
        int XORSum = 0, single_char_XOR = 0, ch_rep;
        long long count = 0;
        seen[XORSum] = 1;
        for (int i = 0; i < word.length(); i++) {
            ch_rep = word[i] - 'a';
            XORSum = XORSum ^ (1 << ch_rep);

            // for all even occurrences
            if (seen.find(XORSum) != seen.end())
                count += seen[XORSum];

            seen[XORSum]++;

            // for all even occurrences except one
            for (char c = 'a'; c <= 'j'; c++) {
                ch_rep = c - 'a';
                single_char_XOR = XORSum ^ (1 << ch_rep);
                if (seen.find(single_char_XOR) != seen.end())
                    count += seen[single_char_XOR];
            }
        }

        return count;
    }
};