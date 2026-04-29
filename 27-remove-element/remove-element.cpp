class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
            int n  = nums.size();
            int s = n ;
    int left = 0, right = n - 1;
    int k = 0;
    while (left < n) {
        if (nums[left] == val) {
            ++k;
            int tmp = nums[left];
            nums[left] = nums[right];
            nums[right] = tmp;
            right--;
            n -= 1;
        } else {
            left++;
        }
    }
    return s - k;
    }
};