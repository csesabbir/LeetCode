class Solution {
    public int maximizeExpressionOfThree(int[] nums) {
        Arrays.sort(nums);
        int len = nums.length - 1;
        int mx = nums[len] + nums[len - 1] - nums[0];
        return mx; 
    }
}