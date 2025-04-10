#include <stdio.h>
#include <stdlib.h>
//"8) Write a program that reads two integers and then prints them in the reverse order in which they were read."
int main(){
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d,%d", &x, &y);
    printf("The numbers entered were: %d and %d", y, x);

    return 0;
}
