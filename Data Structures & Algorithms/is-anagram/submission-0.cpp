class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <int, int> freq_s;
        unordered_map <int, int> freq_t;

        for(char c : s){
            freq_s[c]++;
        }
        for(char c : t){
            freq_t[c]++;
        }
        if(freq_s != freq_t){
            return false;
        }else{
           return true;
        }
    }
};
