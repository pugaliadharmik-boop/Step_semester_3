#include <stdio.h>
#include <string.h>

const char* findDuplicatePick(char* playerNames[], int n) {
    static char result[100];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(playerNames[i], playerNames[j]) == 0) {
                sprintf(result, "Duplicate Found: %s", playerNames[i]);
                return result;
            }
        }
    }

    return "No Duplicates Found";
}

int main() {
    char* lineup1[] = {"Kohli", "Bumrah", "Kohli", "Rohit"};
    int n1 = sizeof(lineup1) / sizeof(lineup1[0]);
    printf("%s\n", findDuplicatePick(lineup1, n1));

    char* lineup2[] = {"Kohli", "Bumrah", "Rohit"};
    int n2 = sizeof(lineup2) / sizeof(lineup2[0]);
    printf("%s\n", findDuplicatePick(lineup2, n2));

    return 0;
}