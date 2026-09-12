def parse_inventory_record(csv_line):
    data = csv_line.split(",")

    if len(data) != 3:
        print("Invalid Record")
    else:
        print("Product:", data[0], "| SKU:", data[1], "| Qty:", data[2])


csv_line = input("Enter inventory record: ")

parse_inventory_record(csv_line)