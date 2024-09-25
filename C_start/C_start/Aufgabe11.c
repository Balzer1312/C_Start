#include<stdio.h>



void main() {

	int punkte;

	//Aufgabe 11
	printf("Sehen wir uns mal Ihre Schulnoten an!\n\nWie viele Punkte haben Sie?\n");
	scanf_s("%d", &punkte);
	if (punkte >= 350 && punkte <= 400) {
		printf("\nHerzlichen Glueckwunsch, Sie haben %d Punkte erreicht!! Das ist die Note \"Sehr gut\"!!!", punkte);
	}
	else if (punkte >= 300 && punkte < 350) {
		printf("\nGlueckwunsch, Sie haben %d Punkte erreicht!! Das ist die Note \"Gut\"!!", punkte);
	}
	else if (punkte >= 250 && punkte < 300) {
		printf("\nGlueckwunsch, Sie haben %d Punkte erreicht!! Das ist ein \"Befriedigend\"!", punkte);
	}
	else if (punkte >= 200 && punkte < 250) {
		printf("\nSie haben %d Punkte erreicht! Das ist ein \"Genuegend\"!:( Sind Sie mit der Note zufrieden?", punkte);
	}
	else if (punkte > 400) {
		printf("\nSie haben %d Punkte! Das kann aber nicht sein!", punkte);
	}
	else {
		printf("\nSie haben %d Punkte erreicht! Das ist ein \"Nicht genügend\"!:(\nDas ist zu wenig!\n\n", punkte);
	}


}