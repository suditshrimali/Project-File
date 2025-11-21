#include <stdio.h>
int main() {

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int pTerm1 = 1;
    int pTerm2 = 0;
    for(int i=0; i<n; i++) {
        if( i<2 ) {
            printf("%d ",i);
        } else {
            int term = pTerm1 + pTerm2;
            printf("%d ",term);
            pTerm2 = pTerm1;
            pTerm1 = term;
        }
    }

    return 0;
}