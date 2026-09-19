#include <stdio.h>
#include <string.h>

struct BookInventory {
    char title[100];
    char author[100];
    int copiesAvailable;
};

void printEntry(struct BookInventory b) {
    printf("%s by %s - %d copies available\n", b.title, b.author, b.copiesAvailable);
}

int main() {
    struct BookInventory books[4] = {
        {"Clean Code", "Robert C. Martin", 3},
        {"Effective Java", "Joshua Bloch", 5},
        {"Refactoring", "Martin Fowler", 0},
        {"Design Patterns", "GoF", 2}
    };

    for (int i = 0; i < 4; i++) {
        printEntry(books[i]);
    }

    return 0;
}