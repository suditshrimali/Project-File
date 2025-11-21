#include <stdio.h>
int main() {

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int digitSum = 0;
    while( n!=0 ) {
        int rem = n%10;
        digitSum += rem;
        n /= 10;
    }

    printf("The sum of digits of entered number is %d",digitSum);

    return 0;
}