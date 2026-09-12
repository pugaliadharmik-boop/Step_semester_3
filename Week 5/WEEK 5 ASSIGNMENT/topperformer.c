#include <stdio.h>

const char* findMinMaxSpread(int scores[], int n) {
    static char result[100];
    int min = scores[0];
    int max = scores[0];

    for (int i = 1; i < n; i++) {
        if (scores[i] < min) {
            min = scores[i];
        }
        if (scores[i] > max) {
            max = scores[i];
        }
    }

    int spread = max - min;
    sprintf(result, "Min: %d | Max: %d | Spread: %d", min, max, spread);

    return result;
}

int main() {
    int scores[] = {45, 82, 79, 90, 33, 90, 61};
    int n = sizeof(scores) / sizeof(scores[0]);

    printf("\"%s\"\n", findMinMaxSpread(scores, n));

    return 0;
}