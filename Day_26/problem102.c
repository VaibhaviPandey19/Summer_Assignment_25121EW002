#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("Eligible to vote\n");
    else
        printf("Not eligible to vote. Wait %d more year(s)\n", 18 - age);
    return 0;
}