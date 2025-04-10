#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//White a program that reads an integer and return its predecessor and successor.

int main(){
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    int z = --x;
    int y = x + 2;
    printf("The predecessor is: %d \nThe successor is: %d \n", z, y);

    return 0;
}
