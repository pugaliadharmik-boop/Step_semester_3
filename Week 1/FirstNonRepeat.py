def first_non_repeating_character(text):

    frequency = {}

    # Count frequency of every character
    for char in text:

        if char in frequency:
            frequency[char] += 1
        else:
            frequency[char] = 1

    # Find first character with frequency 1
    for char in text:

        if frequency[char] == 1:
            return char

    return "No Non-Repeating Character"


text = input("Enter a string: ")

print(first_non_repeating_character(text))