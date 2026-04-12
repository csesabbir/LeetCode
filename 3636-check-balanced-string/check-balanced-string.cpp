class Solution {
public:
    bool isBalanced(string num) {
    int oddSum = 0, evenSum = 0;
    for (int i = 0; i < num.size(); i++) {
        if (i % 2 == 0) {
            evenSum += (num[i] - '0');
        } else {
            oddSum += (num[i] - '0');
        }
    }
    return (oddSum == evenSum);
}
};