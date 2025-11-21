#include <stdio.h>
int main() {

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int revN = 0;
    while( n!=0 ) {
        int rem = n%10;
        revN = revN * 10 + rem;
        n /= 10;
    }

    printf("The reverse of given number is %d",revN);

    return 0;
}