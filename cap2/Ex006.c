#include <stdio.h>
#include <stdlib.h>
//"6) Write a program that reads a value of type double and then prints it in scientific notation."
int main(){
    double x;

    printf("Enter a number:");
    scanf("%lf", &x);

    printf("Value in scientific notation: %e\n", x);

    return 0;
}
