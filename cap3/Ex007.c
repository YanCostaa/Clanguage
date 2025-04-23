#include <stdio.h>
#include <stdlib.h>
//7) Write a program that reads a value in Brazilian reais and the exchange rate of the dollar. Then, print the corresponding value in dollars
int main(){
    float x, z;
    printf("Enter an amount in Reais and the current dollar exchange rate:");
    scanf("%f %f", &x, &z);
    float dollar = x / z;
    printf("The converted value in dollars is: %.2f\n", dollar);

    return 0;
}
