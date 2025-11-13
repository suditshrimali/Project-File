#include <stdio.h>
int main() {

    int p,r,t;
    printf("Enter principal amount : ");
    scanf("%d",&p);
    printf("Enter rate per annum : ");
    scanf("%d",&r);
    printf("Enter time in years : ");
    scanf("%d",&t);

    int amount1 = p;
    for(int i=0; i<t; i++) {
        amount1 += p*r/100;
    }
    int si = amount1 - p;
    printf("amount = %d si = %d",amount1,si);

    int amount2 = p;
    for(int i=0; i<t; i++) {
        amount2 += amount2*r/100;
    }
    int ci = amount2 - p;
    printf("\n amount = %d ci = %d",amount2,ci);

    return 0;
}