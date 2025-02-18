# https: // leetcode.com/problems/construct-smallest-number-from-di-string/description/?envType=daily-question&envId=2025-02-18
# Solution taken from: https://www.youtube.com/watch?v=GgN8d22BEf0&ab_channel=NeetCodeIO
# Did I understand properly? No


class Solution:
    def smallestNumber(self, pattern: str) -> str:
        res,stack= [],[]
        for i in range(len(pattern)+1):
            stack.append(i+1)

            while stack and (i==len(pattern) or pattern[i]=="I"):
                res.append(str(stack.pop()))

        return  "".join(res)
            
        

