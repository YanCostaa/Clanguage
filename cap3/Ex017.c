#include <stdio.h>
#include <stdlib.h>

//17) Write a program that reads an integer and displays its bitwise complement.
int main() {
    unsigned char num, complement;
    printf("Enter an integer: ");
    scanf("%d", &num);

    complement = ~num;

    printf("The complement is: %d\n", complement);
}
