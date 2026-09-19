#include <stdio.h>
#include <string.h>

typedef struct {
    char firstName[50];
    char lastName[50];
} NameTag;

NameTag createNameTag(const char *fullName) {
    NameTag tag;

    sscanf(fullName, "%s %s", tag.firstName, tag.lastName);

    return tag;
}

void getNickname(const NameTag *tag, char *nickname) {
    sprintf(nickname, "%s %c.", tag->firstName, tag->lastName[0]);
}

int main() {
    NameTag tag = createNameTag("Maria Gomez");

    char nickname[100];
    getNickname(&tag, nickname);

    printf("%s\n", nickname);

    return 0;
}