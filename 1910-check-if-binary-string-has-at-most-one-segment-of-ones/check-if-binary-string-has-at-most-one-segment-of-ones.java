class Solution {
    public boolean checkOnesSegment(String s) {
        int strLength = s.length();
        for (int i = 0; i < strLength; i++) {
            if (i == 0 ) {
                if (s.charAt(i) != '1')
                    return false;
            } else if (s.charAt(i) == '1' && s.charAt(i - 1) == '0') {
                return false;
            }
        }
        return true;
    }
}