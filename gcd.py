number1 = int(input("Enter first number: "))
number2 = int(input("Enter second number: "))

original1 = number1
original2 = number2

while number2 != 0:
    remainder = number1 % number2
    number1 = number2
    number2 = remainder

print("The GCD of", original1, "and", original2, "is", number1)