#include <stdio.h>
int main() {

    const double PI = 3.1416;
    int r;
    printf("Enter the radius of circle : ");
    scanf("%d",&r);

    double area = PI*r*r;
    double cference = 2*PI*r;

    printf("Area of circle is %F square unit and circumference of cirle is %F unit.",area,cference);

    return 0;
}