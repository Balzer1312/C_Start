#include<stdio.h>



void main() {

	int sum1;
	int mul = 1;

	//Aufgabe 15
	printf("\nHier ist das 1 mal 1:\n\n");
	for (int i = 1; i <= 10; i++) {
		sum1 = mul * i;
		printf("\n%d * %d = %d", mul, i, sum1);
	}



}