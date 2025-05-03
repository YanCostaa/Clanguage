#include <stdio.h>
#include <stdlib.h>

// "18) Write a program that reads two integers and displays the left and right bitwise shifts of the first number by the second."

int main (){
    int number1, number2, left_shift, right_shift;
    printf("Enter two integer: ");
    scanf("%d, %d", &number1, &number2);
    left_shift = number1 << number2;
    right_shift = number1 >> number2;
    printf("The left shift is: %d\n", left_shift);
    printf("The right shift is: %d\n", right_shift);

    return 0;
}
