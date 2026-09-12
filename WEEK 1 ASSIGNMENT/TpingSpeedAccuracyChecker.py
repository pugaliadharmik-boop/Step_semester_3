def check_typing_accuracy(original, typed):
    correct = 0
    first_mismatch = -1

    # Compare characters
    minimum = min(len(original), len(typed))

    for i in range(minimum):
        if original[i] == typed[i]:
            correct += 1
        elif first_mismatch == -1:
            first_mismatch = i

    # Accuracy
    accuracy = (correct / len(original)) * 100

    # If extra/missing characters
    if len(original) != len(typed) and first_mismatch == -1:
        first_mismatch = minimum

    print("Matches:", correct)
    print("Accuracy:", round(accuracy, 2), "%")

    if first_mismatch == -1:
        print("No Mismatches")
    else:
        print("First Mismatch at position:", first_mismatch)


original = input("Enter original text: ")
typed = input("Enter typed text: ")

check_typing_accuracy(original, typed)