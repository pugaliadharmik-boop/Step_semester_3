def check_duplicate_seats(seat_numbers):
    seen = set()

    for seat in seat_numbers:
        if seat in seen:
            print("Duplicate Seat Number Found:", seat)
            return
        seen.add(seat)

    print("No Duplicate Seats Found")


n = int(input("Enter number of seats: "))

seat_numbers = []

for i in range(n):
    seat_numbers.append(int(input("Enter seat number: ")))

check_duplicate_seats(seat_numbers)