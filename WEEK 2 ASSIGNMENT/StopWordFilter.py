def print_filtered_word_frequency(feedback):

    stop_words = {"the", "was", "and", "a", "is", "of", "to", "it"}

    # Convert to lowercase
    feedback = feedback.lower()

    # Remove punctuation
    feedback = feedback.replace(".", "")
    feedback = feedback.replace(",", "")

    # Split into words
    words = feedback.split()

    frequency = {}

    for word in words:

        # Ignore stop words
        if word in stop_words:
            continue

        if word in frequency:
            frequency[word] += 1
        else:
            frequency[word] = 1

    # Sort by frequency in descending order
    sorted_words = sorted(
        frequency.items(),
        key=lambda x: x[1],
        reverse=True
    )

    # Print result
    for word, count in sorted_words:
        print(word + ":", count)


feedback = input("Enter feedback: ")

print_filtered_word_frequency(feedback)