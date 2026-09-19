#include <stdio.h>
#include <string.h>

typedef struct {
    char password[100];
} PasswordChecker;

void createPasswordChecker(PasswordChecker *p, const char *password) {
    strcpy(p->password, password);
}

const char* getStrength(const PasswordChecker *p) {
    int len = strlen(p->password);

    if (len < 6)
        return "Weak";
    else if (len <= 9)
        return "Medium";
    else
        return "Strong";
}

int main() {
    PasswordChecker pc;

    createPasswordChecker(&pc, "abcd");
    printf("%s\n", getStrength(&pc));

    createPasswordChecker(&pc, "abcdefghij");
    printf("%s\n", getStrength(&pc));

    return 0;
}