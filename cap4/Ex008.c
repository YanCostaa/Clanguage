#include <stdio.h>
//8) Write a program that, given a swimmer's age, classifies them into one of the following categories:
//children A = 5 - 7
//children B = 8 - 10
//juvenile A = 11 - 13
//juvenile B = 14 - 17
//senior = >18

int main (){
    int age;
    printf("Enter you age: ");
    scanf("%d", &age);

    if (age >= 5 && age <= 7){
        printf("You are Children A");
    } else if (age >= 8 && age <= 10){
        printf("You are Children B");
    } else if (age >= 11 && age <= 13){
        printf("You are Juvenile A");
    } else if (age >= 14 && age <= 17){
        printf("You are Juvenile B");
    } else if (age >= 18){
        printf("You are Senior");
    } else {
        printf("Too young!");
    }


    return 0;
}
