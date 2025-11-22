#include <stdio.h>
int main() {

    int p,m,ppc,evs,ss;

    printf("Enter your marks of Physics : ");
    scanf("%d",&p);
    printf("Enter your marks of Maths : ");
    scanf("%d",&m);
    printf("Enter your marks of Softskill : ");
    scanf("%d",&ss);
    printf("Enter your marks of Programming in C : ");
    scanf("%d",&ppc);
    printf("Enter your marks of EVS : ");
    scanf("%d",&evs);

    int sum = p+m+ppc+evs+ss;
    float percent = sum / 5.0f;

    printf("The sum of marks in all subjects is %d and your percentage is %f.",sum,percent);

    return 0;
}