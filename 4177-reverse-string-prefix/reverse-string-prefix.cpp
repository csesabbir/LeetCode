class Solution {
public:
    string reversePrefix(string s, int k) {
        string first_part_string = s.substr(0, k);
        string last_last_string = s.substr(k);
        reverse(first_part_string.begin(), first_part_string.end());
        return first_part_string + "" + last_last_string;
    }
};