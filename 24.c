#include <stdio.h>
int main() {

    int a[10];
    printf("Enter ten elements of an array :-\n");
    for(int i=0; i<10; i++) {
        scanf("%d",a+i);
    }

    for(int i=0; i<9; i++) {
        for(int j=0; j<9-i; j++) {
            if(a[j] > a[j + 1]) {
                int k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
            }
        }
    }

    printf("Array sorted in ascending order :-\n");
    for(int i=0; i<10; i++) {
        printf("%d ",a[i]);
    }

    return 0;
}