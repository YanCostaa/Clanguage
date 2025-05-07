#include <stdio.h>
#include <math.h>
//5) Write a program that reads a number and, if it is positive, calculates and displays:
//The number squared.
//The square root of the number.
int main(){
    int num, number_squared, squaret_root;
    printf("Enter an integer: ");
    scanf("%d", &num);
    number_squared = num * num;
    squaret_root = sqrt(num);
    if(num >= 0) {
        printf("The number squared is: %d\nThe square root is: %d\n", number_squared, squaret_root);
    } else {
        printf("The number is not positive.\n");
    }
}
