#include <stdio.h>
int main() {

    int a,b;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);

    int c = a;
    a = b;
    b = c;

    printf("Value of a is %d, value of b is %d.",a,b);

    return 0;
}