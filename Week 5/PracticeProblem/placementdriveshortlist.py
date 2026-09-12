class Candidate:

    def __init__(self, name, cgpa, codingScore):
        self.name = name
        self.cgpa = cgpa
        self.codingScore = codingScore
        self.compositeScore = 0

    def isEligibleCGPA(self):
        return self.cgpa >= 7.5

    def isEligibleCombined(self):
        return self.cgpa >= 6.5 and self.codingScore >= 60

    def calculateComposite(self):
        self.compositeScore = (self.cgpa * 10) + (self.codingScore * 0.5)


def shortlistAndRank(candidates):

    shortlisted = []

    for candidate in candidates:

        if candidate.isEligibleCGPA() or candidate.isEligibleCombined():

            candidate.calculateComposite()

            shortlisted.append(candidate)

    # Sort by composite score in descending order
    shortlisted.sort(
        key=lambda candidate: candidate.compositeScore,
        reverse=True
    )

    for i in range(len(shortlisted)):

        print(
            str(i + 1) + ". " +
            shortlisted[i].name +
            " (" +
            str(round(shortlisted[i].compositeScore, 1)) +
            ")",
            end=""
        )

        if i < len(shortlisted) - 1:
            print(" | ", end="")


candidates = [
    Candidate("Aisha", 8.2, 40),
    Candidate("Rohit", 6.8, 65),
    Candidate("Meena", 6.0, 98),
    Candidate("Karan", 7.5, 20)
]

shortlistAndRank(candidates)