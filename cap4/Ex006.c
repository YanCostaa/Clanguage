#include <stdio.h>
//6) Write a program that receives a person's height and gender, then calculates and displays their ideal weight using the following formulas (where 'h' corresponds to height):
//Men: (72.7 * h) - 58
//Women: (62.1 * h) - 44.7
int main (){
    float height, idealWeight;
    char gender;
    printf("Enter your height(in meters) and gender (F or M): ");
    scanf("%f %c", &height, &gender);
    if (gender == 'M' || gender == 'm'){
        idealWeight = (72.7 * height) - 58;
        printf("Your ideal weight is: %.2f Kg\n" , idealWeight);
    } else if (gender == 'F' || gender == 'f') {
        idealWeight = (62.1 * height) - 44.7;
        printf("Your ideal weight is: %.2f Kg\n", idealWeight);
    } else {
        printf("Invalid gender. Please enter 'M' for male or 'F' for female.\n");
    }
    return 0;
}
