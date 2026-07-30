class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int> window;
        int low = 0;
        int high = 0;
        int n = s.size();
      
        int ans = 0;

        while(high < n){
            
            while(window.find(s[high]) != window.end()){
                window.erase(s[low]);
                low++;
            }

            window.insert(s[high]);
            
            ans = max(ans, high - low +1);
            high++;

        }
        return ans;
    }
};
