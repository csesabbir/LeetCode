class Solution {
public:
int findComplement(int num) {
    int k = 0;
    while ((1 << k) <= num && k < 31) {
        num = num ^ (1 << k);
        k++;
    }
    return num;
}
};