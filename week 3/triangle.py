# Take the number of rows from the user
rows = int(input("Enter the number of rows: "))

# Outer loop controls the rows
for i in range(1, rows + 1):

    # Inner loop prints stars in each row
    for j in range(1, i + 1):
        print("*", end=" ")

    # Move to the next line after each row
    print()
    