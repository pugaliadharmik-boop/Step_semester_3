def twoSum(nums, target):
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == target:
                return [i, j]


nums = list(map(int, input("Enter nums: ").split(",")))
target = int(input("Enter target: "))

result = twoSum(nums, target)

i, j = result
print("Output:", result, 
      f"(nums[{i}] + nums[{j}] = {nums[i]} + {nums[j]} = {target})")