def parseStudentRecord(csvLine):
    data = csvLine.split(",")

    if len(data) != 3:
        print("Invalid Record")
    else:
        print("Name:", data[0], "| Roll No:", data[1], "| Dept:", data[2])


csvLine = input("Enter student record: ")
parseStudentRecord(csvLine)