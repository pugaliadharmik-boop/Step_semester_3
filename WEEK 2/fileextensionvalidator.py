def validateFileExtension(filename):
    # Find last dot
    position = filename.rfind(".")

    if position == -1:
        print("Rejected — invalid file type")
        return

    extension = filename[position + 1:].lower()

    if extension in ["pdf", "docx", "zip"]:
        print("Accepted")
    else:
        print("Rejected — invalid file type")


filename = input("Enter filename: ")
validateFileExtension(filename)