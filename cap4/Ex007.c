#include <stdio.h>
//A company sells the same product to four different states. Each state has a different tax rate applied to the product.
//Write a program where the user enters the product's value and the destination state.
//The program should return the final price of the product, including the tax rate for the selected state.
//If the entered state is not valid, display an error message.
//MG = 7%
//SP = 12%
//RJ = 15%
//MS = 8%
int main () {
    float price;
    char stateChar1, stateChar2;

    printf("Enter the value per product: ");
    scanf(" %f", &price);

    printf("Enter the state (Ex: SP): ");
    scanf(" %c%c", &stateChar1, &stateChar2);

    if(stateChar1 == 'S' && stateChar2 == 'P'){
        printf(" %f", price * 1.12);
    } else if (stateChar1 == 'M' && stateChar2 == 'G'){
        printf(" %f", price * 1.07);
    } else if(stateChar1 == 'R' && stateChar2 == 'J'){
        printf(" %f", price * 1.15);
    } else if(stateChar1 == 'M' && stateChar2 == 'S'){
        printf(" %f", price * 1.08);
    } else {
        printf("Invalid state!");
    }

    return 0;
}
