def countVowelsAndConsonants(text):
    vowels = 0
    consonants = 0

    for ch in text:
        if ch.lower() in "aeiou":
            vowels += 1
        elif ch.isalpha():
            consonants += 1

    print("Vowels:", vowels)
    print("Consonants:", consonants)


text = input("Enter a string: ")
countVowelsAndConsonants(text)