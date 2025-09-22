class Solution(object):
    def maxFrequencyElements(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        max=0
        n=0
        knum={}
        for i in nums:
            if i in knum.keys():
                knum[i]+=1
            else:
                knum[i]=1
        for (i,j) in knum.items():
            if j>max:
                max=j
                n=0
            if j==max :
                n+=1
        return max*n
            
            
        