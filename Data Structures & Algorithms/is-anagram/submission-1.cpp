class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <int, int> freq_s;
        unordered_map <int, int> freq_t;

        if(s.size() != t.size()) return false;

        for(char c : s){
            freq_s[c]++;
        }
        for(char c : t){
            freq_t[c]++;
        }
       
       return freq_s == freq_t;
    }
};
