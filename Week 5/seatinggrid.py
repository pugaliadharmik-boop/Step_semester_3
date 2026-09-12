def rowAverage(row):
    return sum(row) / len(row)


def classifyRows(seatingScores, threshold):

    result = []

    for i in range(len(seatingScores)):

        avg = rowAverage(seatingScores[i])

        if avg < threshold:
            result.append("Row " + str(i) + ": Quiet Zone")
        else:
            result.append("Row " + str(i) + ": Buzzing Zone")

    return " | ".join(result)


seatingScores = [
    [40, 50, 45],
    [85, 90, 95],
    [30, 20, 25]
]

threshold = 60

print(classifyRows(seatingScores, threshold))