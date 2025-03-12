// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/?envType=daily-question&envId=2025-03-12
//O(log N) Solution take: https://www.youtube.com/watch?v=a-RTjwUkVxM&ab_channel=Techdose
import java.util.Arrays;

class Solution {
    public int maximumCount(int[] nums) {
        int n = nums.length;
        int lb = lowerbound(nums, 0);
        int ub = upperbound(nums, 0);

        return Math.max(lb, n - ub);

    }

    private int lowerbound(int[] nums, int target) {
        int left = 0;
        int right = nums.length;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left;
    }

    private int upperbound(int [] nums, int target){
        int left = 0;
        int right = nums.length;
        while(left<right){
            int mid = left+(right - left)/2;
            if(nums[mid]<=target){
                left = mid + 1;
            }else{
                right = mid;
            }
        }
        return left;
    }
}