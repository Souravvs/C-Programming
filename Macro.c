/*
Author: Sourav V S
Date: 26-03-25
Description: This is a program that defines a macro for the value of π (PI = 3.14159) and write a program to calculate the area of a circle and a cylinder.
*/
#include<stdio.h>
#define Pi 3.14
int main(){
	int rcircle, rcylinder, h;
	printf("\nEnter the radius of the circle: ");
	scanf("%d", &rcircle);
	printf("\nEnter the radius of the cylinder: ");
	scanf("%d", &rcylinder);
	printf("\nEnter the height of the cylinder: ");
	scanf("%d", &h);
	printf("\nArea of the circle: %f", Pi*rcircle*rcircle);
	printf("\nArea of the cylinder: %f", 2*Pi*rcylinder*h + 2*Pi*rcylinder*rcylinder);
	return 0;
}
