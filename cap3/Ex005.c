#include <stdio.h>
#include <stdlib.h>
//5) Write a program that calculates a person's birth year based on their age and the current year.
int main(){
    int age, current_year;
    printf("Enter your age, and current year: ");
    scanf("%d %d", &age, &current_year);
    int birth_year = (current_year - age);
    printf("Your year of birth is: %d"), birth_year;

    return 0;
}
