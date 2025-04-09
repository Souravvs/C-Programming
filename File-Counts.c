/*
Author: Sourav V S
Date: 09-04-25
Description: This is a C program to read a file and count the number of words, line and characters in it.
*/

#include <stdio.h> 
int main(){
  FILE *fp;
  int wordCount=0;
  int lineCount=0;
  int charCount=0;
  fp = fopen("filenew.txt", "r");
  char ch;
  while (fscanf(fp, "%c", &ch) ==1){
    charCount++;
    if (ch == ' ' || ch == '.'){
      wordCount++;
    }
    if (ch == '\n'){
      lineCount++;
    }
  }
  printf("Word Count= %d\n", wordCount); 
  printf("Line Count= %d\n", lineCount); 
  printf("Character Count= %d\n", charCount); 
  fclose(fp);
  return 0;
}
