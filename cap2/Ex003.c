#include <stdio.h>
#include <stdlib.h>
//3) Write a program that reads an integer and then prints the message 'Value read:' followed by the integer value. Use only one printf() command."
int main(){
    int x;
    scanf("%d", &x);
    printf("Value read: %d", x);

    return 0;
}
