class Solution:
    def maxCount(self, m: int, n: int, ops: List[List[int]]) -> int:
        return min([op[0] for op in ops],default=m)*min([op[1] for op in ops],default=n)
        
