#include <stdio.h>
int main() {

    int a[10];
    printf("Enter ten elements of an array :-\n");
    for(int i=0; i<10; i++) {
        scanf("%d",a+i);
    }

    int ele;
    printf("Enter an element to search : ");
    scanf("%d",&ele);

    int flag = 0;
    for(int i=0; i<10; i++) {
        if(ele == a[i]) {
            printf("Element exist at %dth place.",i+1);
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        printf("Element does not exist!");
    }

    return 0;
}