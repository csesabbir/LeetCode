class Solution {
    public int findLengthOfLCIS(int[] nums) {
        int len = nums.length;
        int max = 1, cnt = 1;
        for (int i = 1; i < len; i++) {
            if(nums[i - 1] < nums[i]) {
                cnt++;
            } else {
                max = Math.max(max, cnt);
                cnt = 1;
            }
        }
        max = Math.max(max, cnt);
        return max;
    }
}