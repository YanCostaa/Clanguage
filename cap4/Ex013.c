#include <stdio.h>

int main(){
    char operation;
    int  x, y;

    printf("Choose one of the following math operations: +, -, *, /: \n");
    scanf("%c", &operation);

    printf("Enter the two numbers X and Y: \n");
    scanf("%d %d", &x ,&y);

    switch (operation) {
        case '+':
            printf("The sum is: %d", x+y);
            break;
        case '-':
            printf("The subtraction is: %d", x-y);
            break;
        case '*':
            printf("The multiplication is: %d", x*y);
            break;
        case '/':
            printf("The division is: %d", x/y);
            break;
        default:
            printf("Invalid operation!");
    }
    return 0;
}
