#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
    double num1;
    double num2;
    char op;

    printf("Enter A Number: ");
    scanf("%lf", &num1);
    printf("Enter A Operator: ");
    scanf(" %c", &op);
    printf("Enter Anther Number: ");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f\n", num1 + num2);
    } else if(op == '-'){
        printf("%f\n", num1 - num2);
    } else if(op == '*'){
        printf("%f\n", num1 * num2);
    } else if(op == '/'){
        printf("%f\n", num1 / num2);
    } else {
        printf("Invalid Operator\n");
    }
    return 0;
}