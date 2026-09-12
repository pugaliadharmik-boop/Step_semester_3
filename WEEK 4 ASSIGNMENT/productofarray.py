def productExceptSelf(nums):
    n = len(nums)
    result = [1] * n

    # Product of elements to the left
    left = 1
    for i in range(n):
        result[i] = left
        left = left * nums[i]

    # Product of elements to the right
    right = 1
    for i in range(n - 1, -1, -1):
        result[i] = result[i] * right
        right = right * nums[i]

    return result


nums = [1, 2, 3, 4]
print(productExceptSelf(nums))