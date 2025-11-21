#include <stdio.h>
int main() {

    int a,b;
    printf("Enter two operands (seprated by a space) : ");
    scanf("%d %d",&a,&b);

    char ch;
    printf("Enter an operator: ");
    scanf(" %c", &ch);

    switch(ch) {
        case '+':
        printf("The result is : %d",a+b);
        break;
        case '-':
        printf("The result is : %d",a-b);
        break;
        case '*':
        printf("The result is : %d",a*b);
        break;
        case '/':
        printf("The result is : %f", (float)a / b);
        break;
        default:
        printf("Enter a valid operator!");
    }

    return 0;
}