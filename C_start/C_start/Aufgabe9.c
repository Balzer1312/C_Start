#include<stdio.h>



void main() {

	float sum = 0;
	float a;
	float b;

	//Aufgabe 9
	printf("\n\nJetzt werden wir die Flaeche und den Umfang eines Rechtecks berechnen:\nBitte geben Sie die Seitenlaenge \"a\" ein: ");
	scanf_s("%f", &a);
	printf("\nBitte geben Sie die Seitenlaenge \"b\" ein: ");
	scanf_s("%f", &b);
	printf("Sie haben eingetragen:\n\na= %.2f cm\nb= %.2f cm\n\n", a, b);
	sum = a * b;
	printf("\nBerechnung der Flaeche: %.2f * %.2f = %.2f cm", a, b, sum);
	sum = 2 * (a + b);
	printf("\nBerechnung des Umfangs: 2*(%.2f + %.2f) = %.2f cm", a, b, sum);


}