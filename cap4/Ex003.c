#include <stdio.h>
//3) Write a program that reads an integer and checks whether the number is even or odd.
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("The number is even.\n");
    }else {
        printf("The number is odd.\n");
    }
    system("pause");
    return 0;
}
