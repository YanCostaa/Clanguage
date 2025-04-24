#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 12)Read the height and the radius of a circular cylinder and print the volume of that cylinder. The volume of a circular cylinder is calculated using the following formula: V = PI * radius * height, where pi = 3.141592

int main(){
    float height, radius, v;
    const float pi = 3.141592;
    printf("Enter a radius and height value of a circular cylinder: ");
    scanf("%f %f", &radius, &height);
    v = pi * radius * radius * height;
    printf("The volume of that cylinder is: %f\n", v);

    return 0;
}
