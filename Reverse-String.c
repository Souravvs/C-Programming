/*
Author: Sourav V S
Date: 11-03-2025
Description: This is a program to reverse a string without using string library functions. 
*/

#include<stdio.h>
int main()
{
    char str[20], temp;
    printf("\nEnter a string: ");
    scanf("%s",&str);
    int length, i;
    for (length=0; str[length]!='\0'; length++);
    i = length - 1;
    for(int j=0; j<length/2; j++)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i--;
    }
    printf("\nThe reversed string: %s",str);
    return 0;
}