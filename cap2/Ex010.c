#include <stdio.h>
#include <stdlib.h>
//10) Write a program that asks the user to enter the values for day, month, and year (integers). Then, print the values separated by a slash (\).
int main(){
    int d, m, a;

    printf("Enter a day, month and year: ");
    scanf("%d %d %d", &d, &m, &a);
    printf("The date entered is: %d/%d/%d\n", d, m, a);
    return 0;
}
