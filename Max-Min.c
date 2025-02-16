/*
Author: Sourav V S
Date: 16-02-2025
Description: This is a program to input elements into a one-dimensional array, find the maximum and minimum value and to display their positions in the array. 
*/

#include<stdio.h>
int main(){
    int limit, i, max, min, maxPos, minPos;
    printf("\nEnter the limit: ");
    scanf("%d", &limit);
    int num[limit];
    printf("\nEnter the elements: ");
    for(i = 0; i < limit; i++){
        scanf("%d", &num[i]);
    }
    max = num[0];
    min = num[0];
    maxPos = 0;
    minPos = 0;
    for(i = 1; i < limit; i++){
        if(num[i] > max){
            max = num[i];
            maxPos = i + 1;
        }
        if(num[i] < min){
            min = num[i];
            minPos = i + 1;
        }
    }
    printf("\nThe maximum value: %d \nPosition: %d\v", max, maxPos);
    printf("\nThe minimum value: %d \nPosition: %d", min, minPos);
    
    return 0;
}
