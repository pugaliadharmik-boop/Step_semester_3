#include <stdio.h>
#include <string.h>

struct HallTicket {
    char studentName[50];
    int seatNumber;
};

int main() {
    struct HallTicket priya = {"Priya", 0};
    struct HallTicket *copy = &priya;

    copy->seatNumber = 45;

    printf("Priya's seatNumber (via first variable):\n");
    printf("%d\n", priya.seatNumber);

    printf("copy == priya: true\n");

    struct HallTicket separate = {"Priya", 45};

    printf("separate == priya: false\n");

    return 0;
}