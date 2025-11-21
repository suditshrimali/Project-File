#include <stdio.h>
int main() {

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int fact = 1;
    for(int i=n; i>0; i--) {
        fact *= i;
    }

    printf("Factorial of given number is %d.",fact);

    return 0;
}