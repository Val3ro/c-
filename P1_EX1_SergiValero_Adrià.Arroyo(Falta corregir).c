#include <stdio.h>
#include <conio.h>

float record, marca;

void main () {

	printf("Benvingut\n");
	
	do {
		//entrada variable record
		printf("Introdueix el record a batre: \n");
		scanf("%f", &record);
		//error valor negatiu
		if (record<0) {
			clrscr();
			printf("Error, no es poden introduir dades negatives\n ");
		}
	} while (record<0);

	do {	
		//entrada variable marca
		printf("Introdueix la marca de l'atleta: \n ");
		scanf("%f", &marca);
		//error valor negatiu
		if (marca<0) {
			clrscr();
			printf("Error, no es poden introduir dades negatives\n ");
			
		}
	} while (marca<0);

	//comprovació record
	if (marca < record){
		printf("Nou record\n");
	} else {
		printf("No s'ha batut el  record!\n");
	}
}
