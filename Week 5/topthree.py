def findTopThreeScores(scores):
    first = -1
    second = -1
    third = -1

    for score in scores:

        if score > first:
            third = second
            second = first
            first = score

        elif score > second:
            third = second
            second = score

        elif score > third:
            third = score

    return [first, second, third]


scores = [45, 82, 79, 90, 33, 90, 61]

result = findTopThreeScores(scores)

print(result)