/*
Author: Sourav V S
Date: 30-01-2025
Description: This is a program to find the eligibility of admission for a professional course 
based on a specific criteria.
*/

#include<stdio.h>
int main(){
    int mathScore,chemScore,phyScore,totalScore,mathphyScore;
    printf("\nEnter Student Marks \n\v  Maths: ");
    scanf("%d",&mathScore);
    printf("  Physics: ");
    scanf("%d",&phyScore);
    printf("  Chemistry: ");
    scanf("%d",&chemScore);
    printf("  Total Marks: ");
    scanf("%d",&totalScore);    
    mathphyScore = mathScore + phyScore;
    if (mathScore >= 65 && phyScore >= 55 && chemScore >= 50 && totalScore >= 190 || mathphyScore >= 140){
        printf("\nYou are eligible for admission!");
    }else{
        printf("\nSorry! you are not eligible for admission.");        
    }
    return 0;
}