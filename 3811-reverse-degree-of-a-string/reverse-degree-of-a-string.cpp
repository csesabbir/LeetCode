class Solution {
public:
    int reverseDegree(string s) {
    map<char, int> alpha;
    int index = 26, res = 0;
    for (char a = 'a'; a <= 'z'; a++) {
        alpha[a] = index--;
    }
    for (int i = 0; i < s.size(); i++) {
        res += alpha[s[i]] * (i + 1);
    }
    return res;
}
};