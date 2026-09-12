#include <stdio.h>

void applyMultipliers(double playerScores[], int captainIndex, int viceCaptainIndex) {
    playerScores[captainIndex] *= 2.0;
    playerScores[viceCaptainIndex] *= 1.5;
}

int main() {
    double scores[] = {40, 55, 30, 62};
    int n = sizeof(scores) / sizeof(scores[0]);

    applyMultipliers(scores, 1, 3);

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%.1f", scores[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}