class Solution {
public:
    int maxPower(string s) {
        int n = s.length();
    int mx = 0;
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (s[i - 1] != s[i]) {
            mx = max(mx, cnt);
            cnt = 1;
        } else {
            cnt++;
        }
    }
    mx = max(mx, cnt);
    return mx;
    }
};