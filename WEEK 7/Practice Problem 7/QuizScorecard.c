#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    bool *results;
    int totalQuestions;
    int recorded;
} Scorecard;

Scorecard *createScorecard(int n) {
    Scorecard *sc = malloc(sizeof(Scorecard));
    sc->results = malloc(n * sizeof(bool));
    sc->totalQuestions = n;
    sc->recorded = 0;
    return sc;
}

void recordAnswer(Scorecard *sc, bool result) {
    if (sc->recorded < sc->totalQuestions) {
        sc->results[sc->recorded] = result;
        sc->recorded++;
    }
}

int getScore(Scorecard *sc) {
    int score = 0;

    for (int i = 0; i < sc->recorded; i++) {
        if (sc->results[i])
            score++;
    }

    return score;
}

void destroyScorecard(Scorecard *sc) {
    free(sc->results);
    free(sc);
}

int main() {
    Scorecard *sc = createScorecard(4);

    recordAnswer(sc, true);
    recordAnswer(sc, true);
    recordAnswer(sc, false);
    recordAnswer(sc, true);

    printf("%d\n", getScore(sc));

    destroyScorecard(sc);

    return 0;
}