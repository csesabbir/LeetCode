class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
    int arr[1000005];
    fill(arr, arr + 1000005, -1);
    int n = nums.size();
    for (size_t i = 0; i < n; i++) {
        arr[nums[i]] = i;
    }
    for (size_t i = 0; i < operations.size(); i++) {
        // operations[i][0];
        // operations[i][1];
        int pos = arr[operations[i][0]];
        nums[pos] = operations[i][1];
        arr[operations[i][1]] = pos;
    }
    return nums;
}
};