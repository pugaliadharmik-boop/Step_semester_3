#include <stdio.h>
#include <string.h>

#define MAX_SONGS 100
#define MAX_LENGTH 100

typedef struct {
    char songs[MAX_SONGS][MAX_LENGTH];
    int songCount;
    int maxSongs;
} Playlist;

void addSong(Playlist *p, const char *song) {
    if (p->songCount < p->maxSongs) {
        strcpy(p->songs[p->songCount], song);
        p->songCount++;
    }
}

void getSongs(const Playlist *p, char copy[][MAX_LENGTH]) {
    for (int i = 0; i < p->songCount; i++) {
        strcpy(copy[i], p->songs[i]);
    }
}

int getSongCount(const Playlist *p) {
    return p->songCount;
}

int main() {
    Playlist p = { .songCount = 0, .maxSongs = 10 };

    addSong(&p, "Song A");
    addSong(&p, "Song B");

    char copy[MAX_SONGS][MAX_LENGTH];
    getSongs(&p, copy);

    strcpy(copy[0], "Hacked");

    printf("Playlist songs:\n");
    for (int i = 0; i < getSongCount(&p); i++) {
        printf("%s\n", p.songs[i]);
    }

    printf("Song count: %d\n", getSongCount(&p));

    return 0;
}