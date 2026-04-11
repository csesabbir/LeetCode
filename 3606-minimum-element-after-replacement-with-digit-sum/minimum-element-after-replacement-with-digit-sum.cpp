class Solution {
public:
    int minElement(vector<int>& nums) {
        auto digitSum = [] (int num) {
            int sum = 0;
            while(num != 0) {
                sum += num % 10;
                num /= 10;
            }
            return sum;
        };
        int min = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = digitSum(nums[i]);
            if (nums[i] < min) {
                min = nums[i];
            } 
        }
        return  min;
    }
};