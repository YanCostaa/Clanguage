#include <stdio.h>
//4) Write a program that reads a worker's salary and the value of a loan installment. If the installment:
//Is greater than 20% of the salary, print: 'Loan not approved.'
//Otherwise, print: 'Loan approved.'"
int main(){
    float salary, installment;
    printf("Enter your salary: ");
    scanf("%f", &salary);
    printf("Enter the loan installment amount: ");
    scanf("%f", &installment);
    if (installment > 0.2 * salary) {
        printf("Loan not approved.\n");
    } else {
        printf("Loan approved.\n");
    }
    system("pause");
    return 0;
}
