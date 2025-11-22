#include <stdio.h>
int main() {

    int a[10];
    printf("Enter ten elements of an array :-\n");
    for(int i=0; i<10; i++) {
        scanf("%d",a+i);
    }

    int max = a[0];
    int min = a[0];
    for(int i=0; i<10; i++) {
        if( max<a[i] ) {
            max = a[i];
        }
        if( min>a[i] ) {
            min = a[i];
        }
    }

    printf("Maximum element is %d and minimum element is %d.",max,min);

    return 0;
}