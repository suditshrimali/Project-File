#include <stdio.h>
int main() {

    int a,b;
    printf("Enter two numbers (seprated by a space): ");
    scanf("%d %d",&a,&b);

    if(a==b) {
        printf("Entered numbers are equal.");
    } else {
        printf("Entered numbers are not equal.");
    }

    return 0;
}