#include <stdio.h>
#include <stdlib.h>
//8) Read a value representing a temperature in Celsius and convert it to Fahrenheit. The conversion formula is: F = C * (9.0/5.0) + 32.0, where F is the temperature in Fahrenheit and C is the temperature in Celsius.

int main(){
    int c;
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &c);
    int f = c * (9.0/5.0) + 32.0;
    printf("The temperature converted to Fahrenheit is: %d F", f);

    return 0;
}
