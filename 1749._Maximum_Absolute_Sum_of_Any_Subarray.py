# https:// leetcode.com/problems/maximum-absolute-sum-of-any-subarray/description/?envType=daily-question&envId=2025-02-26
#Help from : https: // www.youtube.com/watch?v=y1VEygeHpGU&ab_channel=NeetCodeIO
#Revision of the problem is a must

class Solution:
    def maxAbsoluteSum(self, nums: List[int]) -> int:
        min_prefix, max_prefix = 0, 0
        curr_sum = 0
        res = 0

        for n in nums:
            curr_sum += n
            res = max(res, abs(curr_sum - min_prefix), abs(curr_sum - max_prefix))
            min_prefix = min(min_prefix, curr_sum)
            max_prefix = max(max_prefix, curr_sum)

        return res
