/*
Author: Sourav V S
Date: 28-01-2025
Description: This is a program to accept a grade and declare the equivalent description.
*/

#include<stdio.h>
int main(){
    char grade;
    printf("\nEnter a grade (E, V, G, A or F): \n");
    scanf(" %c",&grade);
    switch(grade){
        case 'E':
            printf("\nExcellent");
            break;
        case 'V':
            printf("\nVery Good");
            break;
        case 'G':
            printf("\nGood");
            break;
        case 'A':
            printf("\nAverage");
            break;
        case 'F':
            printf("\nFail");
            break;
        default:
            printf("\nInvalid grade! Please enter E, V, G, A or F");
            break;
    }
    return 0;
}