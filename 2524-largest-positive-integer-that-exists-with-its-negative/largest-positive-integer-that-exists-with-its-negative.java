class Solution {
    public int findMaxK(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        int length = nums.length;
        Arrays.sort(nums);
        int res = -1;
        for (int i = 0; i <length && nums[i] < 0;  i++) {
            set.add(nums[i]);
        }
        for (int i = length - 1; i >= 0 && nums[i] > 0; i--) {
            if (set.contains(nums[i] * -1)) {
                res = Math.max(nums[i], res);
            }
        }

        return res;
    }
}