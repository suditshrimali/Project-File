#include <stdio.h>
#include <math.h>

int isArmstrong(int x) {
    int a = x;
    int count = 0;
    while( a!=0 ) {
        a /= 10;
        count++;
    }

    a = x;
    int flag = 0;
    int expSum = 0;
    while( a!=0 ) {
        int rem = a % 10;
        expSum += pow(rem,count);
        a /= 10;
    }
    if(expSum == x) {
        flag = 1;
    }
    
    return flag;
}

int main() {

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++) {
        if(isArmstrong(i) == 1) {
            printf("%d ",i);
        }
    }

    return 0;
}