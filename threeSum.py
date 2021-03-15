def tripleSum(arr, target):
    # outer forl iterates through each index
    for i in arr:
        left = i + 1
        right = len(arr) - 1
        # inside while does the same test as twoSum
        while (left < right):
            current = arr[i] + arr[left] + arr[right]
            if current < target:
                left += 1
            elif current > target:
                right -= 1
            else:
                return [i, left, right]
    return [-1, -1, -1]


# example testcase
arr = [1, 2, 4, 5, 12]
target = 19
print(tripleSum(arr, target))
