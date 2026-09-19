#include <stdio.h>

typedef struct {
    int health;
    const int maxHealth;
} Character;

void takeDamage(Character *c, int amount) {
    c->health -= amount;

    if (c->health < 0)
        c->health = 0;
}

void heal(Character *c, int amount) {
    c->health += amount;

    if (c->health > c->maxHealth)
        c->health = c->maxHealth;
}

int getHealth(const Character *c) {
    return c->health;
}

int main() {
    Character c = {100, 100};

    takeDamage(&c, 30);
    printf("Health after damage: %d\n", getHealth(&c));

    heal(&c, 50);
    printf("Health after healing: %d\n", getHealth(&c));

    takeDamage(&c, 150);
    printf("Health after heavy damage: %d\n", getHealth(&c));

    return 0;
}