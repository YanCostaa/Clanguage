#include <stdio.h>
#include <stdlib.h>
//13) Write a program that reads a character of type char and then prints it between double quotes. So, if the character read is the letter A, it should print "A".
int main(){
    char x;
    printf("Enter a character: \n");
    scanf("%c", &x);
    printf("\"%c\"\n", x);

    return 0;

}
