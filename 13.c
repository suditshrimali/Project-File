#include <stdio.h>
int main() {

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int evenSum = 0;
    int oddSum = 0;
    for(int i=1; i<=n; i++) {
        if(i%2 == 0) {
            evenSum += i;
        } else {
            oddSum += i;
        }
    }

    printf("The sum of even numbers upto given number is %d.\n",evenSum);
    printf("The sum of odd numbers upto given number is %d.\n",oddSum);

    return 0;
}