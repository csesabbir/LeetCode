class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int maxValue = 0, minValue = 0;
        for (int i = 0; i < k; i++) {
            minValue += nums[i];
            maxValue += nums[nums.size() - 1 - i];
        }
        return maxValue - minValue;
    }
};