class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
            int k = 0;
    int n = nums.size();
    int s = n;
    for (int i = 1; i < n;) {
        if (nums[i - 1] == nums[i]) {
            int tmp = nums[i];
            int left = i + 1;
            while (left < n) {
                nums[left - 1] = nums[left];
                left++;
            }
            ++k;
            n -= 1;
        } else { i++;}
    }

    return s - k;
    }
};