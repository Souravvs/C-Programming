/*
Author: Sourav V S
Date: 05-02-2025
Description: This is a program to sort a given array.
*/
#include<stdio.h>
int main(){
  int n,i,j,temp;
  printf("\nEnter the limit: ");
  scanf("%d", &n);
  int num[n];
  printf("\nEnter the elements: ");
  for(i=0; i<n; i++){
    scanf("%d", &num[i]);
  }
  //Bubble sort algorithm
  for(i=0; i<n-1; i++){
    for(j=0; j<n-1-i; j++){
      if(num[j] > num[j+1]){
        temp = num[j];
        num[j] = num[j+1];
        num[j+1] = temp;
      }
    }
  }
  printf("\nThe sorted array is: ");
  for(i=0; i<n; i++){
    printf("%d ",num[i]);
  }
  return 0;
}
