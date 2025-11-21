#include <stdio.h>
int main() {

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int flag = 0;
    for(int i=2; i*i<=n; i++) {
        if(n%i == 0) {
            printf("Given number is not prime.");
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        printf("Given number is prime.");
    }

    return 0;
}