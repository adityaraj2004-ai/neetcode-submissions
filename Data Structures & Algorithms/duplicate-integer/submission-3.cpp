class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for (int i = j+1; i < n; i++) {
            if (nums[i] != nums[j]) {
            
            } else {
                return true;
            }
            j++;
        }
        return false;
    }
};