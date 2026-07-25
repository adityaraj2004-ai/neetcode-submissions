class Solution {
   public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k =  k%n;
        for (int i = 0; i <k; i++) {
            int temp = nums[n - 1];
            for (int j = n - 2; j >= 0; j--) {
                nums[j+1] = nums[j];
            }
            nums[0] = temp;
        }
    }
};