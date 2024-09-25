#include<stdio.h>



void main() {

	int max;
	int min;

	//Aufgabe 13
	printf("\n\nBitte geben Sie mir einmal den min und max an\nMax = ");
	scanf_s("%d", &max);
	printf("\nMin = ");
	scanf_s("%d", &min);
	printf("\nStart:\n");
	while (min <= max) {
		printf("%d\n", min);
		min++;
	}


}