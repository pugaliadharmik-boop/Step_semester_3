def normalizeReference(raw):
    return raw.strip()


def validateAndFormat(reference):
    reference = reference.strip()

    # Total length must be 14
    if len(reference) != 14:
        print("Invalid: wrong length")
        return

    # First 3 must be letters
    for i in range(3):
        if not reference[i].isalpha():
            print("Invalid: bank code must be 3 letters")
            return

    # Remaining 11 must be digits
    for i in range(3, 14):
        if not reference[i].isdigit():
            print("Invalid: date/sequence must be digits")
            return

    bankCode = reference[0:3].upper()
    date = reference[3:9]
    sequence = reference[9:14]

    # Format date as DD/MM/YY
    formattedDate = date[4:6] + "/" + date[2:4] + "/" + date[0:2]

    print("[BANKCODE:", bankCode,
          "| DATE:", formattedDate,
          "| SEQ:", sequence + "]")


raw = input("Enter reference: ")

reference = normalizeReference(raw)

validateAndFormat(reference)