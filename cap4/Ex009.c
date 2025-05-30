#include <stdio.h>
#include <stdlib.h>
int main (){
    float height, weight;
    printf("Enter your height (EX: 1.60): ");
    scanf(" %f", &height);
    printf("Enter your weight: ");
    scanf(" %f", &weight);
    if (height < 1.2) {
        if (weight < 60){
            printf("A\n");
        }else if (weight >= 60 && weight <= 90){
            printf("D\n");
        }else if (weight > 90){
            printf("G");
        }
    } else if (height >= 1.2 && height <= 1.7){
        if (weight < 60) {
            printf("B\n");
        } else if (weight >= 60 && weight <= 90){
            printf("E\n");
        } else if (weight > 90){
            printf("H\n");
        }
    } else if (height > 1.7){
        if (weight < 60) {
            printf("C\n");
        } else if (weight >= 60 && weight <= 90){
            printf("F\n");
        } else if (weight > 90){
            printf("J\n");
        }
    }

    return 0;
}
