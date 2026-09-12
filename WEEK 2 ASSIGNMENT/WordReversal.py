def reverse_each_word(sentence):
    words = sentence.split(" ")

    result = []

    for word in words:
        result.append(word[::-1])

    return " ".join(result)


sentence = input("Enter a sentence: ")

print(reverse_each_word(sentence))