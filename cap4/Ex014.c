#include <stdio.h>

int main(){
    int num;

    printf("Enter a integer:");
    scanf("%d", &num);

    if ((num % 3 == 0) ^ (num % 5 == 0)) {
        printf("The number is divisible by 3 or by 5, but not by both.");
    } else {
        printf("The number does NOT meet the condition.");
    }
}
