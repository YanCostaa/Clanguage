#include <stdio.h>
#include <stdlib.h>
//9) Read an angle in degrees and convert it to radians. The conversion formula is R = G * π/180, where G is the angle in degrees and R is in radians, with π = 3.141592.

int main (){
    float graus, radianos;
    const float pi = 3.141592;
    printf("Enter the angle in degrees: ");
    scanf("%f", &graus);
    radianos = graus * pi / 180;
    printf("The angle in radians is: %.6f\n", radianos);

    return 0;
}
