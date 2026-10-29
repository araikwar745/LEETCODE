class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        fm={}
        for i in range(len(nums)):
            fm[nums[i]]=fm.get(nums[i],0)+1
        for k,v in fm.items():
            if v>len(nums)//2:
                return k