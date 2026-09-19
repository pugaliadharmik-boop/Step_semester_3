#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char names[MAX][50];
    int count;
} AttendanceSheet;

AttendanceSheet createSheet() {
    AttendanceSheet sheet;
    sheet.count = 0;
    return sheet;
}

void markPresent(AttendanceSheet *sheet, const char *name) {
    for (int i = 0; i < sheet->count; i++) {
        if (strcmp(sheet->names[i], name) == 0)
            return;
    }

    if (sheet->count < MAX) {
        strcpy(sheet->names[sheet->count], name);
        sheet->count++;
    }
}

int getPresentCount(const AttendanceSheet *sheet) {
    return sheet->count;
}

int isPresent(const AttendanceSheet *sheet, const char *name) {
    for (int i = 0; i < sheet->count; i++) {
        if (strcmp(sheet->names[i], name) == 0)
            return 1;
    }
    return 0;
}

int main() {
    AttendanceSheet sheet = createSheet();

    markPresent(&sheet, "Ana");
    markPresent(&sheet, "Ben");
    markPresent(&sheet, "Ana");

    printf("%d\n", getPresentCount(&sheet));
    printf("%s\n", isPresent(&sheet, "Ben") ? "true" : "false");
    printf("%s\n", isPresent(&sheet, "Chen") ? "true" : "false");

    return 0;
}