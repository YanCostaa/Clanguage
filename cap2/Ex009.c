#include <stdio.h>
#include <stdlib.h>
//"9) Write a program that reads two float values. Use a single input statement for this. Then, print the values in the reverse order in which they were read."
int main(){
    float a, b;
    printf("Enter two float values: ");
    scanf("%f %f", &a, &b);
    printf("The numbers in reverse order are: %.2f and %.2f\n", b, a);
    return 0;
}
