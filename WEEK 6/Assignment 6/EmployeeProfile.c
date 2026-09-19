#include <stdio.h>
#include <string.h>

struct Employee {
    char empId[20];
    char empName[50];
    double salary;
    int isIntern;
};

void createEmployee(struct Employee *e, char empId[], char empName[], double salary) {
    strcpy(e->empId, empId);
    strcpy(e->empName, empName);
    e->salary = salary;
    e->isIntern = 0;
}

void createIntern(struct Employee *e, char empId[], char empName[]) {
    createEmployee(e, empId, empName, 0);
    e->isIntern = 1;
}

void printProfile(struct Employee e) {
    printf("%s | %s | Rs %.1f | Intern: %s\n",
           e.empId, e.empName, e.salary,
           e.isIntern ? "true" : "false");
}

int main() {
    struct Employee e1, e2;

    createEmployee(&e1, "E-101", "Divya", 65000);
    createIntern(&e2, "E-102", "Arjun");

    printProfile(e1);
    printProfile(e2);

    return 0;
}