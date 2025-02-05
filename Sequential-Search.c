/*
Author: Sourav V S
Date: 05-02-2025
Description: This is a program to perform a sequential search in a one-dimensional array. Input the array elements and the key to search. Display whether the key is found and its position.
*/
#include<stdio.h>
int main(){
  int n,key,i;
  printf("\nEnter the limit: ");
  scanf("%d", &n);
  int num[n];
  printf("\nEnter the elements: ");
  for(i=0; i<n; i++){
    scanf("%d", &num[i]);
  }
  printf("\nEnter the element to search: ");
  scanf("%d", &key);
  for(i=0; i<n; i++){
    if(num[i] == key){
      printf("\nThe position of the given element: %d", i+1);
      break;
      }
  }
  if(num[i] != key){
   printf("Item not found!");
  }
return 0;
}
