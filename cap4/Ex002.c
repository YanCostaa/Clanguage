#include <stdio.h>
//2) Write a program that reads two numbers and displays the greater one. If the two numbers happen to be equal, print the message 'Numbers are equal'

int main (){
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    if (x > y){
        printf("The greater number is: %d \n", x);
    } else {
        if ( x == y ) {
            printf("The numbers are equal: %d = %d\n", x, y);
        } else
            printf("The greater number is: %d\n", y);
        }
    system("pause");
    return 0;
}
