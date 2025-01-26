/*
Author: Sourav V S
Date: 26-01-2025
Description: This is a program to check whether a year is a leap year or not.
*/

#include<stdio.h>
int main(){
    int year;
    printf("\nEnter a year: ");
    scanf("%d",&year);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("The given year is a leap year.");
    }else{
        printf("The given year is not a leap year.");
    }
    return 0;
}