class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
       unordered_map <int> seen;
       for(int num : nums){
        if(seen.count(num)) return true;
        seen.insert(num);
       }
       return false;
    }
};