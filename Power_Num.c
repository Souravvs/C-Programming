'''
Author: Sourav V S
Date: 26-03-25
Description: This is a program to calculate the power of a number using recursion. 
'''
#include<stdio.h>
int power(int base, int exp){
	if (exp == 0){
		return 1;
	}
	else{
		return base * power(base, exp - 1);
	}
}
int main(){
	int base, exp;
	printf("\nEnter the Base & Exponent: ");
	scanf("%d %d", &base, &exp);
	printf("\nThe Power is: %d",power(base,exp));
	return 0;
}
