def normalize_code(raw):
    return raw.strip()


def validate_and_format(code):
    code = code.strip()

    if len(code) < 8:
        return "Invalid: code is too short"

    # First 3 characters must be letters
    for i in range(3):
        if not code[i].isalpha():
            return "Invalid: publisher code must be 3 letters"

    # Remaining characters must be digits
    for i in range(3, len(code)):
        if not code[i].isdigit():
            return "Invalid: remaining characters must be digits"

    publisher = code[0:3].upper()
    year = code[3:7]
    catalog = code[7:]

    return "[PUB:" + publisher + " | YEAR: " + year + " | CATALOG: " + catalog + "]"


raw = input("Enter ISBN code: ")

code = normalize_code(raw)

print(validate_and_format(code))