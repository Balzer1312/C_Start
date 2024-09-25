#include<stdio.h>


void main() {

	float sum = 0;
	float a;
	float b;

	// Aufgabe 8
	printf("\n\nJetzt werden wir die Flaeche eines Rechtecks berechnen:\nBitte geben Sie die Seitenlaenge \"a\" ein: ");
	scanf_s("%f", &a);
	printf("\nBitte geben Sie die Seitenlaenge \"b\" ein: ");
	scanf_s("%f", &b);
	printf("Sie haben eingetragen:\n\na= %.2f cm\nb= %.2f cm\n\n", a, b);
	sum = a * b;
	printf("\nBerechnung: %.2f * %.2f = %.2f cm", a, b, sum);

}