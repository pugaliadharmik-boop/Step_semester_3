def analyze_inventory(sectionA, sectionB):

    totalA = 0
    totalB = 0

    # Calculate total of Section A
    for quantity in sectionA:
        totalA += quantity

    # Calculate total of Section B
    for quantity in sectionB:
        totalB += quantity

    print("Section A Total:", totalA)
    print("Section B Total:", totalB)

    # Compare totals
    if totalA > totalB:
        print("Section A has more total quantity.")
    elif totalB > totalA:
        print("Section B has more total quantity.")
    else:
        print("Both sections are balanced.")

    # Find highest quantity
    highest = sectionA[0]
    section_name = "Section A"

    for quantity in sectionA:
        if quantity > highest:
            highest = quantity
            section_name = "Section A"

    for quantity in sectionB:
        if quantity > highest:
            highest = quantity
            section_name = "Section B"

    print("Highest Quantity:", highest)
    print("Found in:", section_name)


n = int(input("Enter number of items: "))

sectionA = []
sectionB = []

print("Enter Section A quantities:")
for i in range(n):
    sectionA.append(int(input()))

print("Enter Section B quantities:")
for i in range(n):
    sectionB.append(int(input()))

analyze_inventory(sectionA, sectionB)