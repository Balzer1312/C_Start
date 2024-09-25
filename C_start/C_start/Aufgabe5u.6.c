#include<stdio.h>


void main() {

	int zahl4;

	// Aufgabe 5 und 6
	printf("\nBitte geben Sie irgendeine Zahl ein: ");
	scanf_s("%d", &zahl4);

	if (zahl4 > 99 && zahl4 <= 200) {
		printf("\nEingegebene Zahl ist groesser als 99 und kleiner oder gleich 200");
	}
	else if (zahl4 > 200) {
		printf("\nEingegebene Zahl ist groesser als 200");
	}
	else {

		printf("\nDeine eingegebene Zahl ist kleiner als 100");
	}
	zahl4 = 0;
}