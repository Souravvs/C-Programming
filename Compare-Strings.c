/*
Author: Sourav V S
Date: 11-03-2025
Description: This is a program to compare two strings using the strcmp() function. 
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20];
    printf("\nEnter the first string: ");
    scanf("%s",&str1);
    printf("\nEnter the second string: ");
    scanf("%s",&str2);
    int compare = strcmp(str1,str2);
    if (compare == 0)
    {
        printf("\nThe strings are equal!");
    }
    else
    {
        printf("\nThe strings are not equal!");
    }
    return 0;
}