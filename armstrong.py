number = int(input("Enter a number: "))

origNumber = number
sum = 0

while number > 0:
    digit = number % 10
    sum = sum + digit * digit * digit
    number = number // 10

if sum == origNumber:
    print("Is the number", origNumber, "an Armstrong number? Yes")
else:
    print("Is the number", origNumber, "an Armstrong number? No")