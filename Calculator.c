/*
Author: Sourav V S
Date: 28-01-2025
Description: This program takes two integer operands and one operator from the 
user, performs the operation and then prints the result.
*/

#include<stdio.h>
int main(){
    int num1, num2;
    char operation;
    printf("\nEnter two numbers: \n");
    scanf("%d%d",&num1,&num2);
    printf("\nChoose an operation (+, -, *, /, %%): ");
    scanf(" %c",&operation);
    switch(operation){
        case '+': 
            printf("\nResult: %d", num1 + num2);
            break;
        case '-': 
            printf("\nResult: %d", num1 - num2);
            break;
        case '*':  
            printf("\nResult: %d", num1 * num2);
            break;
        case '/': 
            printf("\nResult: %d", num1 / num2);
            break;
        case '%': 
            printf("\nResult: %d", num1 % num2);
            break;
        default:
            printf("\nInvalid input!");
            break;
    }
    return 0;
}
