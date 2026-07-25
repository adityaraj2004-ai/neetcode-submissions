class Solution {
public:
    int maxArea(vector<int>& heights) {
    int maxArea = 0;
    int n =heights.size();

    for(int i =0; i< n; i++){
        for(int j =0; j< n; j++){
            int area = abs(i-j)*min(heights[i],heights[j]);
            maxArea= max(maxArea,area);
        }
    }
    return maxArea;
    }
};
