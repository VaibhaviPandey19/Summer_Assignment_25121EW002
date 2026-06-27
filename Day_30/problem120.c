#include <stdio.h>
#include <string.h>

int calculateTotal(int marks[]);
char calculateGrade(float percentage);

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    char names[50][30];
    int marks[50][3];

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter marks of 3 subjects: ");
        for (int j = 0; j < 3; j++)
            scanf("%d", &marks[i][j]);
    }

    printf("\n--- Final Report ---\n");
    for (int i = 0; i < n; i++) {
        int total = calculateTotal(marks[i]);
        float percentage = total / 3.0;
        char grade = calculateGrade(percentage);
        printf("Name: %s | Total: %d | Percentage: %.2f%% | Grade: %c\n",
               names[i], total, percentage, grade);
    }
    return 0;
}

int calculateTotal(int marks[]) {
    int sum = 0;
    for (int i = 0; i < 3; i++)
        sum += marks[i];
    return sum;
}

char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 75) return 'B';
    else if (percentage >= 60) return 'C';
    else if (percentage >= 40) return 'D';
    else return 'F';
}