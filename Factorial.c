#include<stdio.h>
int main(){
  int fact,i=1;
  printf("\nEnter a positive number: ");
  scanf("%d",&fact);
  while(fact > 0){
    i = i * fact;
    fact--;
  }
  printf("\nFactorial of the given number: %d",i);
  return 0;
}
