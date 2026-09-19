#include <stdio.h>
#include <string.h>

typedef struct {
    int lockerNumber;
    char code[20];
} Locker;

Locker createLocker(int number, const char *code) {
    Locker l;
    l.lockerNumber = number;
    strcpy(l.code, code);
    return l;
}

int changeCode(Locker *l, const char *currentCode, const char *newCode) {
    if (strcmp(l->code, currentCode) == 0) {
        strcpy(l->code, newCode);
        return 1;
    }
    return 0;
}

int main() {
    Locker l = createLocker(101, "1234");

    if (changeCode(&l, "1234", "5678"))
        printf("success\n");
    else
        printf("rejected\n");

    if (changeCode(&l, "0000", "9999"))
        printf("success\n");
    else
        printf("rejected, code is still 5678\n");

    return 0;
}