#include<stdio.h>
int main(){
    int n, prod=1, rem;
    printf("Enter Number: ");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        prod *= rem;
        n /= 10;
    }
    printf("Product of digits = %d", prod);
    return 0;
}