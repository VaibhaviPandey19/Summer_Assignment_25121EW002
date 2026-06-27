#include <stdio.h>
int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    char names[50][30];
    float basic[50], hra[50], da[50], gross[50];
    for (int i = 0; i < n; i++) {
        printf("Enter name and basic salary of employee %d: ", i + 1);
        scanf("%s %f", names[i], &basic[i]);
        hra[i] = basic[i] * 0.20;
        da[i] = basic[i] * 0.10;
        gross[i] = basic[i] + hra[i] + da[i];
    }
    printf("\n--- Salary Report ---\n");
    for (int i = 0; i < n; i++)
        printf("%s -> Basic: %.2f, HRA: %.2f, DA: %.2f, Gross: %.2f\n",
               names[i], basic[i], hra[i], da[i], gross[i]);
    return 0;
}