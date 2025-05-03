#include <stdio.h>
#include <stdlib.h>
// 16) Write a program that reads an integer and displays its multiplication and division by two (use bit shift operators).
int main(){
    int number, multiplied, divided;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    multiplied = number << 1;
    divided = number >> 1;
    printf("The number multiplied for two is: %d\n", multiplied);
    printf("The number divided for two is: %d", divided);
    return 0;
}
