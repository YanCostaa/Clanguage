#include <stdio.h>
#include <stdlib.h>
//7) Write a program that reads a character and then prints it as an integer value.
int main (){
    char c;
    printf("Digite um caractere: ");
    scanf("%c", &c);

    printf("%d", c);

    return 0;
}
