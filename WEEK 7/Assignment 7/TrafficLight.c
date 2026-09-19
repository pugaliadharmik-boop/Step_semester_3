#include <stdio.h>
#include <string.h>

typedef struct {
    char id[20];
    char color[10];
} TrafficLight;

void createTrafficLight(TrafficLight *t, const char *id) {
    strcpy(t->id, id);
    strcpy(t->color, "RED");
}

void next(TrafficLight *t) {
    if (strcmp(t->color, "RED") == 0)
        strcpy(t->color, "GREEN");
    else if (strcmp(t->color, "GREEN") == 0)
        strcpy(t->color, "YELLOW");
    else
        strcpy(t->color, "RED");
}

const char* getColor(const TrafficLight *t) {
    return t->color;
}

int main() {
    TrafficLight t;

    createTrafficLight(&t, "TL-9");

    printf("%s\n", getColor(&t));

    next(&t);
    printf("%s\n", getColor(&t));

    next(&t);
    printf("%s\n", getColor(&t));

    next(&t);
    printf("%s\n", getColor(&t));

    return 0;
}