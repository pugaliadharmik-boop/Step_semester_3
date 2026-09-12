#include <stdio.h>
#include <string.h>

static double rowAverage(int row[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += row[i];
    }
    return (double)sum / length;
}

const char* classifyMatches(int* runsPerOver[], int rowLengths[], int matchCount, int threshold) {
    static char result[1000];
    result[0] = '\0';

    for (int i = 0; i < matchCount; i++) {
        double avg = rowAverage(runsPerOver[i], rowLengths[i]);
        char buffer[100];

        sprintf(buffer, "Match %d: %s", i, (avg >= threshold) ? "Power Surge" : "Normal");
        strcat(result, buffer);

        if (i < matchCount - 1) {
            strcat(result, " | ");
        }
    }

    return result;
}

int main() {
    int row0[] = {4, 6, 8};
    int row1[] = {10, 12, 14};
    int row2[] = {2, 3, 1};

    int* runsPerOver[] = {row0, row1, row2};
    int rowLengths[] = {3, 3, 3};
    int matchCount = 3;
    int threshold = 8;

    printf("\"%s\"\n", classifyMatches(runsPerOver, rowLengths, matchCount, threshold));

    return 0;
}