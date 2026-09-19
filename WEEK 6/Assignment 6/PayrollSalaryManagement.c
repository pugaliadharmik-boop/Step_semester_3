#include <stdio.h>

struct PayrollAccount {
    double basicSalary;
    double bonus;
};

void createAccount(struct PayrollAccount *p, double salary) {
    if (salary < 0) {
        printf("Warning: Negative salary, starting at 0\n");
        p->basicSalary = 0;
    } else {
        p->basicSalary = salary;
    }
    p->bonus = 0;
}

void creditBonus(struct PayrollAccount *p, double amount) {
    if (amount <= 0) {
        printf("Invalid bonus amount\n");
    } else {
        p->bonus += amount;
        printf("Bonus credited: Rs %.1f\n", amount);
    }
}

void deductTax(struct PayrollAccount *p, double percent) {
    if (percent < 0 || percent > 100) {
        printf("Invalid tax percentage\n");
    } else {
        p->basicSalary -= p->basicSalary * percent / 100;
        printf("Tax deducted: %.0f%%\n", percent);
    }
}

double getNetSalary(struct PayrollAccount *p) {
    return p->basicSalary + p->bonus;
}

int main() {
    struct PayrollAccount p;

    createAccount(&p, 50000);

    creditBonus(&p, 5000);

    deductTax(&p, 10);

    printf("Net salary: Rs %.1f\n", getNetSalary(&p));

    return 0;
}