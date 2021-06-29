class Solution:
    def repeatedSubtraction(self, A, B):
        count =0
        while A!=0 and B!=0:
            if A>B:
                count += A//B
                A%=B
            else:
                count += B//A
                B%=A
        return count
