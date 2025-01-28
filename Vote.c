/*
Author: Sourav V S
Date: 28-01-2025
Description: This is a program to read the age of a candidate and determine whether it is 
eligible for casting his/her own vote. 
*/

#include<stdio.h>
int main(){
    int age;
    printf("\nEnter age of the candidate: ");
    scanf("%d",&age);
    if (age >= 18){
        printf("\nCongratulation! You are eligible for casting your vote.");
    }else{
        printf("\nSorry! You are not eligible for casting your vote.");
    }
    return 0;
}