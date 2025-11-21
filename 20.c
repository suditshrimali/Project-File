#include <stdio.h>
int main() {

    int a[10];

    int sum = 0;
    printf("Enter elements of array :- \n");
    for(int i=0; i<10; i++) {
        scanf("%d",a+i);
        sum += a[i];
    }

    printf("\nThe sum of elements in array is %d",sum);

    return 0;
}