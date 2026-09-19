#include <stdio.h>
#include <string.h>

struct Employee {
    char empName[50];
    double salary;
};

char companyName[] = "Bright Horizon Technologies";
int employeeCount = 0;

void createEmployee(struct Employee *e, char name[], double salary) {
    strcpy(e->empName, name);
    e->salary = salary;
    employeeCount++;
}

void printCompanyInfo() {
    printf("%s\n", companyName);
    printf("Employees on record: %d\n", employeeCount);
}

int main() {
    struct Employee e1, e2, e3;

    createEmployee(&e1, "Rahul", 50000);
    createEmployee(&e2, "Priya", 60000);
    createEmployee(&e3, "Arjun", 55000);

    printCompanyInfo();

    return 0;
}