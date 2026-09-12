#include <stdio.h>

void curveScores(int scores[], int n, int bonus)
{
    for (int i = 0; i < n; i++)
    {
        scores[i] = scores[i] + bonus;
    }
}

int main()
{
    int scores[] = {70, 85, 60};
    int n = 3;
    int bonus = 10;

    curveScores(scores, n, bonus);

    printf("[");

    for (int i = 0; i < n; i++)
    {
        printf("%d", scores[i]);

        if (i < n - 1)
            printf(", ");
    }

    printf("]");

    return 0;
}