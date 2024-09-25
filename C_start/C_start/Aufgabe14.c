#include<stdio.h>



void main() {

	int zahl = 123;
	int zahl2 = 200;
	int zahl3 = 99;
	int zahl4=0;
	int sum1=0;


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
	printf("\nAnzahl der Durchlaeufe: %d mal!\n", zahl4);
	sum1 = 0;



}