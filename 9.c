#include <stdio.h>
int main() {

    int y;
    printf("Enter the year : ");
    scanf("%d",&y);

    if(y%4 == 0) {
        printf("Entered year is a leap year.");
    } else {
        printf("Entered year is not a leap year.");
    }

    return 0;
}