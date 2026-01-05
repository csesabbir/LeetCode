class Solution {
    public boolean isValid(String word) {
        int len = word.length();
        word = word.toLowerCase();
        if (len >= 3) {
            int cntVowel = 0, cntDigits = 0, cntCon = 0, nonChar = 0;
            for (int i = 0; i < len ; i++) {
                if (Character.isLetter(word.charAt(i))) {
                    if (isVowel(word.charAt(i))) {
                        cntVowel++;
                    } else {
                        cntCon++;
                    }
                } else if (Character.isDigit(word.charAt(i))) {
                    cntDigits++;
                } else {
                    nonChar++;
                }
            } 

            if ( cntVowel >= 1 && cntCon >= 1 && nonChar == 0  ) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
    public boolean isVowel(char ch) {
        return (ch == 'a' || ch == 'u' || ch == 'i' || ch == 'e' || ch == 'o');
    }
}