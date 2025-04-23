#include <stdio.h>
#include <stdlib.h>
//Read a speed in km/h (kilometers per hour) and display it converted to m/s (meters per second). The conversion formula is M = K / 36, where K is the speed in km/h and M is in m/s.
int main(){
    float k;
    printf("Enter your speed in KM/h: ");
    scanf("%f", &k);
    float m = k / 3.6;
    printf("Your speed in m/s is: %f", m);

    return 0;
}

