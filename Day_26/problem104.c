#include <stdio.h>
int main() {
    int score = 0, ans;
    printf("Q1: What is the capital of India?\n1. Mumbai 2. Delhi 3. Chennai\n");
    scanf("%d", &ans);
    if (ans == 2) score++;
    printf("Q2: 5 + 7 = ?\n1. 10 2. 12 3. 13\n");
    scanf("%d", &ans);
    if (ans == 2) score++;
    printf("Q3: C language was developed by?\n1. Dennis Ritchie 2. Bill Gates 3. James Gosling\n");
    scanf("%d", &ans);
    if (ans == 1) score++;
    printf("Your score: %d / 3\n", score);
    return 0;
}