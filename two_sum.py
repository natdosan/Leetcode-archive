def twoSum(arr, target):
  # left pointer
    left = 0
  # right pointer
    right = len(arr)-1
    while left < right:
  # find the sum of the two pointers, then run through the ifs
      current = arr[left] + arr[right]
       if current < target:
       # increase left pointer
          left += 1
        elif current > target:
       # increase right pointer
          right -= 1
       # else means that current and target are equal; current is the sum of the left and right pointers
        else:
          return
            [left, right]
    return [-1, -1]

  # enter example data here
    arr1 = []
    target1 =
    arr2 = []
    target2 =
    arr2 = []
    target3 =

    print(twoSum(arr1, target1))
    print(twoSum(arr2, target2))
    print(twoSum(arr3, target3))
