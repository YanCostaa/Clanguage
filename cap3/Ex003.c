#include <stdio.h>
#include <stdlib.h>
// 3) White a program that reads three integer values and displays their sum.
int main(){
    int x, z, y;
    printf("Enter three integer values: ");
    scanf("%d, %d, %d", &x, &z, &y);
    int sum = x + z + y;
    printf("The sum of the three values is: %d", sum);

    return 0;
}
