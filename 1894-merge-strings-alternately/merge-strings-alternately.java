class Solution {
    public String mergeAlternately(String word1, String word2) {
        int len1 = word1.length();
        int len2 = word2.length();
        String res = "";
        int i = 0, j = 0;
        while (i < len1 && j < len2) {
            res += word1.charAt(i) + "" +  word2.charAt(j);
            i++;
            j++; 
        }
        while (i < len1) {
            res += word1.charAt(i++);
        }
        while (j < len2) {
            res += word2.charAt(j++);
        }
        return res;
    }
}