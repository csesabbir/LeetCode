class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size();
    vector<int> res ;
    int arr[1001];
    fill(arr, arr + 1001, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < nums[i].size(); j++) {
            arr[nums[i][j]]++;
        }
    }
    for (int i = 1; i < 1001; i++) {
        if (arr[i] == n) {
            res.push_back(i);
        }
    }
    return res;
    }
};