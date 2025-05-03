#include <stdio.h>
#include <stdlib.h>
//15) Write a program to read a positive three-digit integer. Then, calculate and display the number formed by the digits of the input number in reverse order. Example:

int main(){
    int num, hundreds, tens, units, reversed;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    hundreds = num / 100;
    tens = (num / 10) % 10;
    units = num % 10;
    reversed = units * 100 + tens * 10 + hundreds;

    printf("Reversed number: %d\n", reversed);
    return 0;
}
