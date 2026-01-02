class Solution {
    public boolean isSumEqual(String firstWord, String secondWord, String targetWord) {
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for (int i = 0; i < firstWord.length(); i++) {
            cnt1 = 10 * cnt1 + (firstWord.charAt(i) - 'a');
        }
        for (int i = 0; i < secondWord.length(); i++) {
            cnt2 = 10 * cnt2 + (secondWord.charAt(i) - 'a');
        }
        for (int i = 0; i < targetWord.length(); i++) {
            cnt3 = 10 * cnt3 + (targetWord.charAt(i) - 'a');
        }

        return (cnt1 + cnt2 == cnt3);
    }
}