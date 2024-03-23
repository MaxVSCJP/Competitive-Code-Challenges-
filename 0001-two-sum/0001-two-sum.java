class Solution {
    public int[] twoSum(int[] nums, int target) {
        int x=0,y=1;
        int nums_length = nums.length-1;
        while(nums[x] + nums[y] != target){
            if(y != nums_length){
                y++;
            }
            else if(y == nums_length){
                x++;
                y = x+1;
            }
        }
        int []solution ={x,y};
        return solution;
    }
}