/*
Author: Sourav V S
Date: 29-01-2025
Description: This is a program to calculate the factorial of a given number. 
*/
#include<stdio.h>
int main(){
  int num,fact=1,temp;
  printf("\nEnter a positive number: ");
  scanf("%d",&num);
  temp = num;
  while(num > 0){
    fact = fact * num;
    num--;
  }
  printf("\nFactorial of %d is: %d",temp,fact);
  return 0;
}
