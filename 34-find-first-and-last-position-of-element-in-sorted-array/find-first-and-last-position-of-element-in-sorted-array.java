class Solution {
    public int[] searchRange(int[] nums, int target) {
        int len = nums.length - 1;
        int[] r = new int[2];
        int res = -1;
        int lo = 0, hi = len;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                res = mid;
                hi = mid - 1;
            } else if (nums[mid] > target) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        r[0] = res;
        res = -1;
        lo = 0;
        hi = len;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                res = mid;
                lo = mid + 1;
            } else if (nums[mid] > target) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        r[1] = res;
        return r;
    }
}