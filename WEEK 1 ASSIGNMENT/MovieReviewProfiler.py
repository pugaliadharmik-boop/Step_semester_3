def classify_word_length(review):

    words = review.split()

    short = 0
    medium = 0
    long = 0

    for word in words:

        # Remove punctuation
        word = word.strip(".,!?;:")

        length = len(word)

        if 1 <= length <= 4:
            short += 1

        elif 5 <= length <= 8:
            medium += 1

        elif length >= 9:
            long += 1

    print("Short:", short)
    print("Medium:", medium)
    print("Long:", long)


review = input("Enter movie review: ")

classify_word_length(review)