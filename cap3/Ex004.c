#include <stdio.h>
#include <stdlib.h>
//4) Read four float values. Calculate and display their arithmetic mean.
int main(){
    float a, b, c, d;
    printf("Enter four float values: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float med = (a + b + c + d) /4;
    printf("The average is: %2.f", med);

    return 0;
}
