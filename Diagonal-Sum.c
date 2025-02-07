/*
Author: Sourav V S
Date: 07-02-25
Description: This is a program to calculate the sum of diagonal elements of a square matrix.
*/
#include<stdio.h>
int main(){
  int row,col,sum=0;
  printf("\nEnter the order of the matrix: ");
  scanf("%d %d",&row,&col);
  int num[row][col];
  printf("\nEnter the elements: ");
  for (int i=0; i<row; i++){
    for (int j=0; j<col; j++){
      scanf("%d",&num[i][j]);
    }
  }
  printf("\nThe matrix is: \n");
  for (int i=0; i<row; i++){
    for (int j=0; j<col; j++){
      printf("%d\t",num[i][j]);
      if (i == j){
        sum = sum + num[i][j];
      }
    }
    printf("\n");
  }
  printf("\nThe sum of diagonal elements: %d\n",sum);
  return 0;
}
