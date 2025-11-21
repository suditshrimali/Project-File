#include <stdio.h>
int main() {

    int a[10],b[10],c[10];
    printf("Enter 10 elements of two array (seprated by a space) :-\n");
    for(int i=0; i<10; i++) {
        scanf("%d %d",a+i,b+i);
        c[i] = a[i] + b[i];
    }

    printf("\nThe elements of third array :-\n");
    for(int i=0; i<10; i++) {
        printf("%d ",c[i]);
    }

    return 0;
}