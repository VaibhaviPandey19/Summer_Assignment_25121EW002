#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[50];
    for (int i = 0; i < n; i++) {
        printf("Enter roll, name, marks for student %d: ", i + 1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++)
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    return 0;
}