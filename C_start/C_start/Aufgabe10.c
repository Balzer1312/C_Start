#include<stdio.h>



void main() {

	float sum = 0;
	float a;
	float b;
	char guess;

	//Aufgabe 10
	printf("\nWollen Sie die Flaeche oder den Umfang berechnen?\nDie Eingabe muss so erfolgen:\nFlaeche fuer \"f\".\nUmfang fuer \"u\".\n\n");
	while (getchar() != '\n')
	guess = getchar();

	switch (guess) {
	case 'f':
		printf("\n\nJetzt werden wir die Flaeche eines Rechtecks berechnen:\n\nBitte geben Sie die Seitenlaenge \"a\" ein: ");
		scanf_s("%f", &a);
		printf("\nBitte geben Sie die Seitenlänge \"b\" ein: ");
		scanf_s("%f", &b);
		printf("Sie haben eingetragen:\n\na= %.2f cm\nb= %.2f cm\n\n", a, b);
		sum = a * b;
		printf("\nBerechnung: %.2f * %.2f = %.2f cm", a, b, sum);
		break;

	case 'u':
		printf("\n\nJetzt werden wir den Umfang eines Rechtecks berechnen:\nBitte geben Sie mir die Seitenlaenge \"a\" ein: ");
		scanf_s("%f", &a);
		printf("\nBitte geben Sie jetzt die Seitenlänge \"b\" ein: ");
		scanf_s("%f", &b);
		printf("Sie haben eingetragen:\n\na= %.2f cm\nb= %.2f cm\n\n", a, b);
		sum = 2 * (a + b);
		printf("\nBerechnung: 2*(%.2f + %.2f) = %.2f cm", a, b, sum);
		break;

	default:
		printf("\nGenug mit Rechnen\n\n");
	}


}