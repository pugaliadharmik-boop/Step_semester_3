#include <stdio.h>
#include <string.h>

typedef struct {
    char id[20];
    int savings;
} PiggyBank;

PiggyBank createPiggyBank(const char id[]) {
    PiggyBank pb;
    strcpy(pb.id, id);
    pb.savings = 0;
    return pb;
}

void deposit(PiggyBank *pb, int amount) {
    if (amount > 0)
        pb->savings += amount;
}

void withdraw(PiggyBank *pb, int amount) {
    if (amount > 0 && amount <= pb->savings)
        pb->savings -= amount;
}

int getSavings(const PiggyBank *pb) {
    return pb->savings;
}

int main() {
    PiggyBank pb = createPiggyBank("PB-1");

    deposit(&pb, 100);
    printf("savings = %d\n", getSavings(&pb));

    withdraw(&pb, 30);
    printf("savings = %d\n", getSavings(&pb));

    withdraw(&pb, 500);
    printf("savings = %d\n", getSavings(&pb));

    return 0;
}