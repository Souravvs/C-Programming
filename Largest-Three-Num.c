/*
Author: Sourav V S
Date: 29-01-2025
Description: This is a program to input three numbers and find the largest among them using nested if statements. 
*/

#include<stdio.h>
int main(){
  int num1,num2,num3;
  printf("\nEnter three numbers: \n");
  scanf("%d %d %d",&num1, &num2, &num3);
  if(num1 > num2){
    if(num1 > num3){
      printf("\nThe largest number is %d\n",num1);
    }else{
      printf("\nThe largest number is %d\n",num3);
    }
  }else if(num2 > num1){
    if(num2 > num3){
      printf("\nThe largest number is %d\n",num2);
    }else{
      printf("\nThe largest number is %d\n",num3);
    }
  }else{
    printf("\nThe numbers are equal\n");
  }
  return 0;
}
