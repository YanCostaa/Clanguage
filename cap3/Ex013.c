#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Let a and b be the legs of a triangle, whose hypotenuse h is obtained by the equation: h =  raiz quadrada a*a + b*b. Write a program that reads the values of a and b, and calculates the value of the hypotenuse using the given formula. Print the result.

int main (){
    double a, b, h;
    printf("Type the value of the A: ");
    scanf("%lf", &a);
    printf("Type the value of the B: ");
    scanf("%lf", &b);
    h = sqrt(pow(a, 2) + pow(b, 2));
    printf("The value of the hypotenuse is: %.2f\n", h);

    return 0;
}
