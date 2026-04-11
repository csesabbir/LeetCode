class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int freqCount[101];
        for (int i = 0; i < nums.size(); i++) {
            freqCount[nums[i]]++;
        }
        int sum = 0;
        for (int i = 1; i <= 100; i++) {
            if (freqCount[i] != 0 && freqCount[i] % k == 0)
            {
                sum += (freqCount[i] * i);
            }
        }
        return sum;
    }
};