# https://leetcode.com/problems/construct-the-lexicographically-largest-valid-sequence/description/?envType=daily-question&envId=2025-02-16
#Help from: https://www.youtube.com/watch?v=rNv0vgNc4Ww&ab_channel=NeetCodeIO



class Solution:
    def constructDistancedSequence(self, n: int) -> List[int]:
        res = [0] * (2*n-1)
        used = set() #nums already used

        def backtrack(i):
            if i == len(res):
                return True
        
            #Try largest elements
            for num in reversed(range(1, n+1)):
                #validation
                if num in used:
                    continue;
                if num>1 and (i+num >= len(res) or res[i+num]):
                    continue;
            
                #Try decision
                used.add(num)
                res[i] = num
                if num>1:
                    res[i+num] = num

                j = i+1
                while j<len(res) and res[j]:
                    j+=1;

                #Recursive Step
                if backtrack(j):
                    return True

                #Backtrack
                used.remove(num)
                res[i]=0
                if num>1:
                    res[i+num] = 0;

            return False;

        backtrack(0)
        return res
        
        backtrack(0)
        return res


