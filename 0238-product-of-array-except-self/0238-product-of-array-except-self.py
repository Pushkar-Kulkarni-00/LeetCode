class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        pdt = 1
        zc=0
        for i in nums:
            if(i==0):
                zc+=1
                if(zc>1): 
                    return [0]*len(nums)
                continue
            pdt*=i
        h = []
        if(zc==1):
            for i in range(len(nums)):
                if nums[i]==0:
                    h.append(pdt)
                else:
                    h.append(0)
            return h
        else:
            for i in range(len(nums)):
                h.append(pdt/nums[i])
            return h
        