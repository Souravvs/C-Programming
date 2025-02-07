/*
Author: Sourav V S
Date: 07-02-25
Description: This is a program to perform matrix addition.
*/
#include<stdio.h>
int main(){
  int row, col;
  printf("\nEnter the rows and columns: ");
  scanf("%d %d",&row,&col);
  int matrix1[row][col], matrix2[row][col], matrix3[row][col];
  printf("\nEnter the elements of the first matrix: ");
  for (int i=0; i<row; i++){
    for (int j=0; j<col; j++){
      scanf("%d",&matrix1[i][j]);
    }
  }
  printf("\nEnter the elements of the second matrix: ");
  for (int i=0; i<row; i++){
    for (int j=0; j<col; j++){
      scanf("%d",&matrix2[i][j]);
    }
  }
  printf("\nThe sum of the two matrices: \n");
  for (int i=0; i<row; i++){
    for (int j=0; j<col; j++){
      matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
      printf("%d\t",matrix3[i][j]);
    }
    printf("\n");
  }
  return 0;
}
