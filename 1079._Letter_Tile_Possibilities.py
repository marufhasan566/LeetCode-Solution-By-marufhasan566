# https://leetcode.com/problems/letter-tile-possibilities/description/?envType=daily-question&envId=2025-02-17
# Solution taken from: https://www.youtube.com/watch?v=8FrJX-P_DnE&ab_channel=NeetCodeIO
# Did I understand properly? No

class Solution:
    def numTilePossibilities(self, tiles: str) -> int:
        count = Counter(tiles)  # char -> available count
        # A, B

        # A, AB, B, BA
        def backtrack():
            res = 0

            for c in count:
                if count[c] > 0:
                    count[c] -= 1
                    res += 1
                    res += backtrack()
                    count[c] += 1
            return res

        return backtrack()
