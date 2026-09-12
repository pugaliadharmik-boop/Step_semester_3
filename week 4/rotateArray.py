def rotateArray(nums, k):
    n = len(nums)
    k = k % n

    newArray = [0] * n

    for i in range(n):
        newPosition = (i + k) % n
        newArray[newPosition] = nums[i]

    return newArray


nums = list(map(int, input("Enter nums: ").split(",")))
k = int(input("Enter k: "))

result = rotateArray(nums, k)

print("Output:", result)