#include <stdio.h>
// 19) Write a program that reads two integers and displays the result of the operations: 'exclusive or', 'bitwise or', and 'bitwise and' between them.

int main(){
    unsigned char  number1, number2, exclusive_or , bitwise_or, bitwise_and;
    printf("Enter two integers: ");
    scanf("%hhu %hhu", &number1, &number2);

    exclusive_or = number1 ^ number2;
    bitwise_or = number1 | number2;
    bitwise_and = number1 & number2;

    printf("The 'exclusive or' result is: %u\n", exclusive_or);
    printf("The 'bitwise or' result is: %u\n", bitwise_or);
    printf("The 'bitwise and' result is: %u\n", bitwise_and);

    return 0;
}
