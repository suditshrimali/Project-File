#include <stdio.h>

int decToBinary(int decNum) {
    int ans = 0, pow = 1;
    while( decNum>0 ) {
        int rem = decNum % 2;
        decNum /= 2;

        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}

int biToDecimal(int biNum) {
    int ans = 0, pow = 1;
    while( biNum>0 ) {
        int lastDigit = biNum % 10;
        biNum /= 10;

        ans += lastDigit * pow;
        pow *= 2;
    }
    return ans;
}
int main() {

    int n1;

    printf("Enter a number (in decimal number system) : ");
    scanf("%d",&n1);
    printf("Given number in binary number system is %d.\n",decToBinary(n1));

    int n2;
    printf("\nEnter a number (in binary number system) : ");
    scanf("%d",&n2);

    printf("Given number in decimal number system is %d.",biToDecimal(n2));

    return 0;
}