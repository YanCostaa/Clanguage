#include <stdio.h>
#include <stdlib.h>
//15) Write a program that reads three variables: char, int, and float. Then, print them in three different ways: separated by spaces, by a horizontal tab, and one on each line. Use a single printf() statement for each printing operation.
int main(){
    char z;
    int x;
    float y;
    printf("Enter a character, an integer and a float: ");
    scanf("%c, %d, %f", &z, &x, &y);
    printf("The values entered are: %c %d %.2f\n", z, x, y);
    printf("The values entered are: %c\t%d\t%.2f\n", z, x, y);
    printf("The values entered are: \n%c\n%d\n%.2f\n", z, x, y);

    return 0;
}
