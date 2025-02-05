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
