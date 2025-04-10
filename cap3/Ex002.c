#include <stdio.h>
#include <stdlib.h>
//Write a program that reads a real number and prints one fifth of that number.
int main(){
    float number, fifthPart;
    printf("Enter a real number: ");
    scanf("%f", &number);
    fifthPart = number/5;
    printf("The fifth part of the number is: %.2f\n", fifthPart);

    return 0;
}
