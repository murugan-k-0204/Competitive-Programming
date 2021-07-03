class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n<1:
            return False
        temp = math.log(n,4)
        return temp//1==temp
