hs = {}
nums = [2, 7, 11, 15]
tar = 9

for i, num in enumerate(nums):
    if tar - num in hs:
        print([hs[tar - num], i])
    else:
        hs[num] = i
