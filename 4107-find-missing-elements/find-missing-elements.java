class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        Arrays.sort(nums);
        int flag = 0, start = 0, end = 0;
        List<Integer> tmp = new ArrayList<>();
        for (int i = 1; i < nums.length; i++) {
            if ((nums[i - 1] - nums[i] ) * -1 > 1) {
                flag =nums[i] - nums[i - 1];
                start = nums[i - 1] + 1;
                end = nums[i]; 
                while (start < end) {
                    tmp.add(start);
                    start++;
                }
            }
        }
        return tmp;
    }
}