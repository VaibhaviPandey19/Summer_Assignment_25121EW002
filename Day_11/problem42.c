#include <stdio.h>
int findMax(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int a = 15, b = 25;
    printf("Maximum = %d\n", findMax(a, b));
    return 0;
}