#include<stdio.h>


void main() {

	float sum = 0;
	float a;
	float b;


	// Aufgabe 7
	printf("\n\nJetzt werden wir den Umfang eines Rechtecks berechnen:\nBitte geben Sie mir die Seitenlaenge \"a\" ein: ");
	scanf_s("%f", &a);
	printf("\nBitte geben Sie jetzt die Seitenlänge \"b\" ein: ");
	scanf_s("%f", &b);
	printf("Sie haben eingetragen:\n\na= %.2f cm\nb= %.2f cm\n\n", a, b);
	sum = 2 * (a + b);
	printf("\nBerechnung: 2*(%.2f + %.2f) = %.2f cm", a, b, sum);

}