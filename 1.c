#include <stdio.h>
int main() {

    int p,c,m,e,h;

    printf("Enter your marks of Physics : ");
    scanf("%d",&p);
    printf("Enter your marks of Chemistry : ");
    scanf("%d",&c);
    printf("Enter your marks of Maths : ");
    scanf("%d",&m);
    printf("Enter your marks of English : ");
    scanf("%d",&e);
    printf("Enter your marks of Hindi : ");
    scanf("%d",&h);

    int sum = p+c+m+e+h;
    float percent = sum / 5.0f;

    printf("The sum marks in all subjects is %d and your percentage is %f.",sum,percent);

    return 0;
}