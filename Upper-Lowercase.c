/*
Author: Sourav V S
Date: 26-01-2025
Description: This is a program to print Lower case of corresponding upper case character.
*/

#include<stdio.h>
int main(){
    char c;
    printf("\nEnter a character in upper case: ");
    c = getchar();
    c = c + 32;
    printf("\nCharacter in lower case: %c",c);
    return 0;
}