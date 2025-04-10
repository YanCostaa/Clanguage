#include <stdio.h>
#include <stdlib.h>
//14) Write a program that reads three characters of type char and then prints them one on each line. Use a single printf() statement for this.
int main(){
    char x, y, z;
    printf("Enter three characters: ");
    scanf("%c, %c, %c", &x, &y, &z);
    printf("%c\n%c\n%c\n", x, y, z);

    return 0;
}
