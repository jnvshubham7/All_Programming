#
# @lc app=leetcode id=349 lang=python3
#
# [349] Intersection of Two Arrays
#

# @lc code=start
class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:

        # nums1 = set(nums1)
        # nums2 = set(nums2)

        # return list(nums1 & nums2)


        #  res =[]

        # for i in nums1:
        #     if i not in res and i in nums2:
        #         res.append(i)

        # return res


      
       

        res =[]

        nums1.sort()
        nums2.sort()

        i=j=0

        while( i<len(nums1) and j<len(nums2)):
            if nums1[i] == nums2[j]:
                if nums1[i] not in res:
                    res.append(nums1[i])
                i+=1
                j+=1

            elif nums1[i]<nums2[j]:
                 i+=1

            else:
                j+=1    


        return res

        








        
# @lc code=end

