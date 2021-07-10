from typing import Counter


class Solution:
    def minSetSize( self , arr: List[int] ) -> int :
        cnt = Counter(arr)
        freq = list(cnt.values)
        freq.sort()

        ans, rem, half = 0, 0, len(arr) // 2
        while rem < half :
            ans += 1
            rem += freq.pop()
        return ans