#include <stdio.h>
#include <math.h>
int isArmstrong(int n) {
    int orig = n, sum = 0, digits = 0, temp = n;
    while (temp != 0) { digits++; temp /= 10; }
    temp = n;
    while (temp != 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return sum == orig;
}
int main() {
    int n = 153;
    if (isArmstrong(n))
        printf("Armstrong number\n");
    else
        printf("Not Armstrong\n");
    return 0;
}