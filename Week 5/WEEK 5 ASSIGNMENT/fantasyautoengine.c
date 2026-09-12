#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    char name[50];
    int matchesPlayed;
    double battingAverage;
    bool injured;
} Player;

bool isDraftableExperience(int matchesPlayed) {
    return matchesPlayed >= 10;
}

bool isDraftableCombined(int matchesPlayed, bool injured) {
    return matchesPlayed >= 5 && !injured;
}

int compareTo(const void* a, const void* b) {
    Player* p1 = (Player*)a;
    Player* p2 = (Player*)b;

    if (p2->battingAverage > p1->battingAverage) return 1;
    if (p2->battingAverage < p1->battingAverage) return -1;
    return 0;
}

const char* draftAndRank(Player players[], int n) {
    static char result[1000];
    result[0] = '\0';

    Player draftable[500];
    int draftableCount = 0;

    for (int i = 0; i < n; i++) {
        if (isDraftableExperience(players[i].matchesPlayed) ||
            isDraftableCombined(players[i].matchesPlayed, players[i].injured)) {
            draftable[draftableCount++] = players[i];
        }
    }

    qsort(draftable, draftableCount, sizeof(Player), compareTo);

    for (int i = 0; i < draftableCount; i++) {
        char buffer[100];
        sprintf(buffer, "%d. %s", i + 1, draftable[i].name);
        strcat(result, buffer);

        if (i < draftableCount - 1) {
            strcat(result, " | ");
        }
    }

    return result;
}

int main() {
    Player players[] = {
        {"Virat", 15, 48.0, false},
        {"Rahul", 7, 55.0, false},
        {"Sameer", 3, 60.0, false},
        {"Dev", 12, 20.0, true}
    };
    int n = sizeof(players) / sizeof(players[0]);

    printf("\"%s\"\n", draftAndRank(players, n));

    return 0;
}