#include <stdio.h>
int main() {

    int cTemp;
    printf("Enter temperature in Celcius : ");
    scanf("%d",&cTemp);

    int fTemp = (9.0/5)*cTemp + 32;

    printf("Temperature in Fahrenheit is %d.",fTemp);

    return 0;
}