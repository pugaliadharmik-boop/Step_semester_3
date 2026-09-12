def palindrome_iterative(text):

    left = 0
    right = len(text) - 1

    while left < right:

        if text[left] != text[right]:
            return False

        left += 1
        right -= 1

    return True


text = input("Enter a word: ")

if palindrome_iterative(text):
    print("Iterative: Palindrome")
else:
    print("Iterative: Not Palindrome")