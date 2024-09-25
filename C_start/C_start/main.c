#include <stdio.h>
#include <windows.h>

int main() {
	int zahl = 123;
	int zahl2 = 200;
	int zahl3 = 99;
	int zahl4;
	int punkte;
	int i;
	int max;
	int min;
	int sum1 = 0;
	int mul = 1;
	float sum = 0;
	float a;
	float b;
	char guess;


	//Aufgabe 1
	printf("\nKevin Balzer\n");


	//Aufgabe 2
	printf("%d\n%d\n%d\n", zahl, zahl2, zahl3);


	//Aufgabe 3
	printf("Bitte zahl Eingeben:\n");
	scanf_s("%d", &zahl4);
	printf("Deine Zahl lautet: %d\n", zahl4);


	//Aufgabe 4
	printf("Um diesen Text ausgeben zu koennen, muss ich das Escape Zeichen \\ verwenden und nach diesem Zeichen die richtige Anweisung.\n\n");


	// Aufgabe 5 und 6
	printf("Bitte geben Sie irgendeine Zahl ein: ");
	scanf_s("%d", &zahl4);

	if (zahl4 > 99 && zahl4 < 201) {
		printf("\nEingegebene Zahl ist größer als 99 und kleiner oder gleich 200");
	}
	else if (zahl4 > 200) {
		printf("\nEingegebene Zahl ist größer als 200");
	}
	else {
		printf("\nDeine eingegebene Zahl ist kleiner als 100");
	}
	zahl4 = 0;


	// Aufgabe 7
	printf("\n\nJetzt werden wir den Umfang eines Rechtecks berechnen:\nBitte geben Sie mir die Seitenlaenge \"a\" ein: ");
	scanf_s("%f", &a);
	printf("\nBitte geben Sie jetzt die Seitenlänge \"b\" ein: ");
	scanf_s("%f", &b);
	printf("Sie haben eingetragen:\n\na= %.2f cm\nb= %.2f cm\n\n", a, b);
	sum = 2 * (a + b);
	printf("\nBerechnung: 2*(%.2f + %.2f) = %.2f cm", a, b, sum);


	// Aufgabe 8
	printf("\n\nJetzt werden wir die Fläche eines Rechtecks berechnen:\nBitte geben Sie die Seitenlänge \"a\" ein: ");
	scanf_s("%f", &a);
	printf("\nBitte geben Sie die Seitenlänge \"b\" ein: ");
	scanf_s("%f", &b);
	printf("Sie haben eingetragen:\n\na= %.2f cm\nb= %.2f cm\n\n", a, b);
	sum = a * b;
	printf("\nBerechnung: %.2f * %.2f = %.2f cm", a, b, sum);


	//Aufgabe 9
	printf("\n\nJetzt werden wir die Flaeche und den Umfang eines Rechtecks berechnen:\nBitte geben Sie die Seitenlänge \"a\" ein: ");
	scanf_s("%f", &a);
	printf("\nBitte geben Sie die Seitenlänge \"b\" ein: ");
	scanf_s("%f", &b);
	printf("Sie haben eingetragen:\n\na= %.2f cm\nb= %.2f cm\n\n", a, b);
	sum = a * b;
	printf("\nBerechnung der Fläche: %.2f * %.2f = %.2f cm", a, b, sum);
	sum = 2 * (a + b);
	printf("\nBerechnung des Umfangs: 2*(%.2f + %.2f) = %.2f cm", a, b, sum);


	//Aufgabe 10
	printf("Wollen Sie die Flaeche oder den Umfang berechnen?\nDie Eingabe muss so erfolgen:\nFlaeche für \"f\".\nUmfang für \"u\".\n\n");
	while (getchar() != '\n');  
	guess = getchar();

	switch (guess) {
	case 'f':
		printf("\n\nJetzt werden wir die Fläche eines Rechtecks berechnen:\n\nBitte geben Sie die Seitenlänge \"a\" ein: ");
		scanf_s("%f", &a);
		printf("\nBitte geben Sie die Seitenlänge \"b\" ein: ");
		scanf_s("%f", &b);
		printf("Sie haben eingetragen:\n\na= %.2f cm\nb= %.2f cm\n\n", a, b);
		sum = a * b;
		printf("\nBerechnung: %.2f * %.2f = %.2f cm", a, b, sum);
		break;

	case 'u':
		printf("\n\nJetzt werden wir den Umfang eines Rechtecks berechnen:\nBitte geben Sie mir die Seitenlänge \"a\" ein: ");
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


	//Aufgabe 11
	printf("Sehen wir uns mal Ihre Schulnoten an!\n\nWie viele Punkte haben Sie?\n");
	scanf_s("%d", &punkte);
	if (punkte > 349 && punkte < 401) {
		printf("\nHerzlichen Glückwunsch, Sie haben %d Punkte erreicht!! Das ist die Note \"Sehr gut\"!!!", punkte);
	}
	else if (punkte > 299 && punkte < 350) {
		printf("\nGlückwunsch, Sie haben %d Punkte erreicht!! Das ist die Note \"Gut\"!!", punkte);
	}
	else if (punkte > 249 && punkte < 300) {
		printf("\nGlückwunsch, Sie haben %d Punkte erreicht!! Das ist ein \"Befriedigend\"!", punkte);
	}
	else if (punkte > 199 && punkte < 250) {
		printf("\nSie haben %d Punkte erreicht! Das ist ein \"Genügend\"!:( Sind Sie mit der Note zufrieden?", punkte);
	}
	else if (punkte > 400) {
		printf("\nSie haben %d Punkte! Das kann aber nicht sein!", punkte);
	}
	else {
		printf("\nSie haben %d Punkte erreicht! Das ist ein \"Nicht genügend\"!:(\nDas ist zu wenig!\n\n", punkte);
	}


	//Aufgabe 12
	for (i = 0; i < 26; i++) {
		printf("%d\n", i);
	}


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


	//Aufgabe 14
	printf("\nBitte geben Sie mir 3 ganze Zahlen ein, um mit diesen Zahlen bis \"1.000.000\" zu addieren!\n\n");
	scanf_s("%d", &zahl);
	scanf_s("%d", &zahl2);
	scanf_s("%d", &zahl3);

	while (sum1 < 1000000) {
		sum1 += zahl + zahl2 + zahl3;
		printf("Berechnung: %d + %d + %d = %d\n", zahl, zahl2, zahl3, sum1);
		zahl4++;
	}
	printf("\nAnzahl der Durchläufe: %d mal!\n", zahl4);
	sum1 = 0;


	//Aufgabe 15
	printf("\nHier ist das 1 mal 1:\n\n");
	for (i = 1; i <= 10; i++) {
		sum1 = mul * i;
		printf("\n%d * %d = %d", mul, i, sum1);
	}


	//Aufgabe 16
	for (i = 1; i <= 15; i++) {
		printf("\n%d", i);
		Sleep(1000); 
	}


	//Aufgabe 17
	for (i = 0; i < 51; i++) {
		if (i % 2 == 0 || i % 5 == 0) {
			printf("\n\n%d\n", i);
		}
	}


	return 0;
}
