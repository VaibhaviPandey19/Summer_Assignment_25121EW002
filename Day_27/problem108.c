#include <stdio.h>
int main() {
    char name[50];
    int sub[5], total = 0;
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter marks of 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &sub[i]);
        total += sub[i];
    }
    float percentage = total / 5.0;
    char grade;
    if (percentage >= 90) grade = 'A';
    else if (percentage >= 75) grade = 'B';
    else if (percentage >= 60) grade = 'C';
    else if (percentage >= 40) grade = 'D';
    else grade = 'F';
    printf("\n--- Marksheet ---\n");
    printf("Name: %s\n", name);
    printf("Total: %d/500\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    return 0;
}