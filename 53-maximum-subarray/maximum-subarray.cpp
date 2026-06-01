class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_sum = INT_MIN;
        int max_start = 0;
        for (int i = 0; i < n; i++) {
            max_start += nums[i];
            if (max_start > max_sum) {
                max_sum = max_start;
            }
            if (max_start < 0) {
                max_start = 0;
            }
        }
        return max_sum;
    }
};