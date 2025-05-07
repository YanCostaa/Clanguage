#include <stdio.h>
//1) Write a program that reads two numbers and displays which one is greater.

int main(){
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    if (x > y) {
        printf("The greater number is: %d\n", x);
    } else {
        printf("The greater number is: %d\n", y);
    }
    system("pause");
    return 0;
}
