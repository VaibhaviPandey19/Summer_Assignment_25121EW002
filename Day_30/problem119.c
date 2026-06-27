#include <stdio.h>
#include <string.h>
struct Employee {
    char name[30];
    float salary;
    char department[30];
};
int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee e[50];
    for (int i = 0; i < n; i++) {
        printf("Enter name, department, salary for employee %d: ", i + 1);
        scanf("%s %s %f", e[i].name, e[i].department, &e[i].salary);
    }
    float totalSalary = 0;
    printf("\n--- Employee Report ---\n");
    for (int i = 0; i < n; i++) {
        printf("%s | Dept: %s | Salary: %.2f\n", e[i].name, e[i].department, e[i].salary);
        totalSalary += e[i].salary;
    }
    printf("Total Salary Expense = %.2f\n", totalSalary);
    return 0;
}