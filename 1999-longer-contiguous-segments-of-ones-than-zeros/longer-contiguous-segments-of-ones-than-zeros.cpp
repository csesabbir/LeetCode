class Solution {
public:
    bool checkZeroOnes(string s) {
        int n = s.length();
    int zero = 0, one = 0, mOne = 0, mZero = 0;
    char flag = '0';
    if (s[0] == '1') {
        one++;
        flag = '1';
    } else {
        zero++;
    }

    for (int i = 1; i < n; i++) {
        if (s[i] == '1') {
            if(flag == '1') {
                one++;
                mOne = max(one, mOne);
            } else {
                one = 1;
                flag = '1';
            }
        } else {
            if(flag == '0') {
                zero++;
                mZero = max(zero, mZero);
            } else {
                zero = 1;
                flag = '0';
            }
        }
    }
    mOne = max(one, mOne);
    mZero = max(zero, mZero);
    return mOne > mZero;
    }
};