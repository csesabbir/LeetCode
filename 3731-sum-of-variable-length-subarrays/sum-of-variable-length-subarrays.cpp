class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
    int sum {0};
    for (int  i = 0; i < n; i++) {
        if (i == 0) {
            sum += nums[i];
        } else {
            
            int start {max(0, i - nums[i])};
            nums[i] += nums[i - 1];
            if (start != 0) {
                sum += (nums[i] - nums[start - 1]);
            } else {
                sum += nums[i];
            }
        }
    }
    return sum;
    }
};