/*
Author: Sourav V S
Date: 11-03-2025
Description: This is a program to count the frequency of each character in a given string. 
*/

#include<stdio.h>
int main()
{
    char str[1000];
    int freq[26] = {0};
    printf("\nEntet a string: ");
    fgets(str,sizeof(str),stdin);
    for(int i=0; str[i]!='\0'; i++)
    {
        char ch = str[i];
        if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }
        if(ch >= 'a' && ch <= 'z')
        {
            freq[ch - 97]++;
        }
    }
    printf("\nThe character frequency count: \n");
    for(int i=0; i<26; i++)
    {
        if(freq[i] > 0)
        {
            printf("%c: %d\n",i+97,freq[i]);
        }
    }
    return 0;
}