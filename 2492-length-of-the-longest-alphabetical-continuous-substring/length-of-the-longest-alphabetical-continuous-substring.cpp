class Solution {
public:
    int longestContinuousSubstring(string s) {
        int mx = 1;
    int cnt = 1;
    int n = s.size();
    for (int i = 1; i < n; i++) {
        if (s[i - 1] != s[i] - 1) {
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