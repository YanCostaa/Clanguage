#include <stdio.h>
#include <stdlib.h>

//14) Write a program that converts an uppercase letter to a lowercase letter. Use the ASCII table for that.
int main (){
    char letter, lowercase;
    printf("Enter a uppercase letter: ");
    scanf(" %c", &letter);
    lowercase = letter + 32;
    printf("The lowercase letter is: %c", lowercase);

    return 0;
}
