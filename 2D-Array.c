/*
Author: Sourav V S
Date: 07-02-25
Description: This is a program to print a matrix.
*/
#include<stdio.h>
int main(){
  int row,col;
  printf("\nEnter the rows and columns: ");
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
    }
    printf("\n");
  }
  return 0;
}
