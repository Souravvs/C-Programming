/*
Author: Sourav V S
Date: 26-03-25
Description: This is a program to to calculate the sum of array elements by passing the array to a function. Display the sum in the main function. 
*/
#include<stdio.h>
int sum(int arr[], int limit);
int main(){
	int limit;
	printf("\nEnter the limit: ");
	scanf("%d", &limit);
	int arr[limit];
	printf("\nEnter the elements: ");
	for (int i = 0; i <= limit-1; i++){
		scanf("%d", &arr[i]);
	}
	printf("\nSum of Array Elements: %d", sum(arr, limit));
	return 0;
}
int sum(int arr[], int limit){
	int sum = 0;
	for (int i = 0; i <= limit-1; i++){
		sum += arr[i];
	}
	return sum;
}
