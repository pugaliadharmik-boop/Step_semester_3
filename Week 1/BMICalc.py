def calculate_bmi(weight, height):
    return weight / (height * height)


def classify_bmi(bmi):

    if bmi < 18.5:
        return "Underweight"

    elif bmi <= 24.9:
        return "Normal"

    elif bmi <= 29.9:
        return "Overweight"

    else:
        return "Obese"


n = int(input("Enter number of people: "))

print("\nPerson | Height(m) | Weight(kg) | BMI | Category")
print("--------------------------------------------------")

for i in range(1, n + 1):

    height = float(input("Enter height for person " + str(i) + ": "))
    weight = float(input("Enter weight for person " + str(i) + ": "))

    bmi = calculate_bmi(weight, height)
    category = classify_bmi(bmi)

    print(i, "     |", height, "     |", weight,
          "     |", round(bmi, 2), "|", category)