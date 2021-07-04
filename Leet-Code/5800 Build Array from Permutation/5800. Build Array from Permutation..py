class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        result = [None]*len(nums)
        i=0
        for ind in nums:
            result[i]= nums[ind]
            i+=1
        return result
