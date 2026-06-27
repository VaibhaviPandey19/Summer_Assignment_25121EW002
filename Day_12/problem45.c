#include <stdio.h>
int isPalindrome(int n) {
    int rev = 0, orig = n;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == orig;
}
int main() {
    int n = 12321;
    if (isPalindrome(n))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}