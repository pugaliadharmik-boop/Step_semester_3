def maskPhoneNumber(phone):
    phone = phone.strip()

    if len(phone) != 10 or not phone.isdigit():
        print("Invalid phone number")
        return

    masked = "XXXXXX" + phone[6:]

    print(masked)


phone = input("Enter phone number: ")
maskPhoneNumber(phone)