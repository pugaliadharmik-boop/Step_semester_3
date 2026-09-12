def subarraySum(nums, k):
    count = 0
    current_sum = 0

    # Stores how many times each prefix sum occurred
    prefix = {0: 1}

    for num in nums:
        current_sum += num

        # Check if current_sum - k exists
        if current_sum - k in prefix:
            count += prefix[current_sum - k]

        # Store current prefix sum
        if current_sum in prefix:
            prefix[current_sum] += 1
        else:
            prefix[current_sum] = 1

    return count


nums = [1, 1, 1]
k = 2

print(subarraySum(nums, k))