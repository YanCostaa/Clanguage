#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 11) Read the value of the radius of a circle. Calculate and print the area of the corresponding circle. The area of the circle is A = π * radius², where π = 3.141592.

int main () {
    float radius, a;
    const float pi = 3.141592;
    printf("Enter a radius value: ");
    scanf("%f", &radius);
    a = pi * radius * radius;
    printf("The area of the circus is: %f\n", a);

    return 0;
}
