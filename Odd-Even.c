/*
Author: Sourav V S
Date: 28-01-2025
Description: This is a program to check whether a given number is an odd number or even number.
*/

#include<stdio.h>
int main(){
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    if (num % 2 == 0){
        printf("\nThe given number is an even number.");
    }else{
        printf("\nThe given number is an odd number.");
    }
    return 0;
}