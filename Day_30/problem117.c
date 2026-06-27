#include <stdio.h>
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    char names[50][30];
    int rolls[50];
    float marks[50];
    for (int i = 0; i < n; i++) {
        printf("Enter roll, name, marks for student %d: ", i + 1);
        scanf("%d %s %f", &rolls[i], names[i], &marks[i]);
    }
    float total = 0;
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", rolls[i], names[i], marks[i]);
        total += marks[i];
    }
    printf("Class Average = %.2f\n", total / n);
    return 0;
}