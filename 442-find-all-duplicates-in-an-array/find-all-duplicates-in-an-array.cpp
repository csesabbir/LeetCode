class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
    int arr[n + 1];
    fill(arr, arr + n + 1, 0);
    for (size_t i = 0; i < n; i++) {
        arr[nums[i]]++;
    }
    vector<int> res;
    for (size_t i = 1; i <= n; i++) {
        if (arr[i] == 2) {
            res.push_back(i);
        }
    }
    return res;
    }
};