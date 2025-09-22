class Solution(object):
    def maxFrequencyElements(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        max1=0
        n=0
        knum=[0]*100
        for i in nums:
            knum[i-1]+=1
            max1=max(max1,knum[i-1])
        for i in knum:
            if i==max1:
                n+=1
        return max1*n
            
            
        