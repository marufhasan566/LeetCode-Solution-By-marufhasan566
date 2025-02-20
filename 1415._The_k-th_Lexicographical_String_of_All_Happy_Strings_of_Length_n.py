# https: // leetcode.com/problems/construct-smallest-number-from-di-string/description/?envType=daily-question&envId=2025-02-18
# Solution taken from: https://www.youtube.com/watch?v=yyqT5310oJY&ab_channel=Techdose
# Did I understand ? No

from collections import deque

class Solution:
    def getHappyString(self, n: int, k: int) -> str:
        size_n = []
        q = deque()

        # Push all start points
        q.append("a")
        q.append("b")
        q.append("c")

        while q:
            curr = q.popleft()
            if len(curr) == n:
                size_n.append(curr)
                continue

            # Build next 2 strings
            last_char = curr[-1]
            if last_char == 'a':
                q.append(curr + 'b')
                q.append(curr + 'c')
            elif last_char == 'b':
                q.append(curr + 'a')
                q.append(curr + 'c')
            else:
                q.append(curr + 'a')
                q.append(curr + 'b')

        if len(size_n) < k:
            return ""
        return size_n[k - 1]