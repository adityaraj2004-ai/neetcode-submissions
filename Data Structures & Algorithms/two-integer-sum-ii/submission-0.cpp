class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector <int> ans;

        for(int i = 0; i< n; i++){
            for(int j = i+1; j< n; j++){
                if(nums[i] + nums[j] == target && i<j){
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    return ans;
                }
            }
        }
        return {-1,-1};
    }
};
