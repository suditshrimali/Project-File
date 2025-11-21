#include <stdio.h>
int main() {

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum += i;
    }

    printf("The sum of all numbers upto given number is %d.",sum);

    return 0;
}