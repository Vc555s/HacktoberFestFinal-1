class Solution {
    public static String triangleType(int[] nums) {
        String answer= new String();
        if(nums[0]==nums[1]&&nums[1]==nums[2]&&nums[0]==nums[2]){
            answer="Equilateral";
        }
        else if(nums[0]+nums[1]>nums[2]&&nums[1]+nums[2]>nums[0]&&nums[0]+nums[2]>nums[1]){
            answer="Scalene";
        }
        else if(nums[0]==nums[1]||nums[1]==nums[2]||nums[0]==nums[2]){
            answer="isosceles";
        }
    return answer;
}
    public static void main(String[] args){
        int[] nums= {3,4,5};
        System.out.println(triangleType(nums));
    }
}