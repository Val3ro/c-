/*******************************************
*										   *
*	Autors: Sergi Valero i Adria Arroyo	   *
*	Practica 1 exercici 1			 	   *
*										   *
*******************************************/

//Llibreries del sistema
#include <stdio.h>
#include <conio.h>

//Introduccio de variables
float record, marca;

void main () {

	printf("Benvingut\n");

	//entrada variable record
	printf("Introdueix el record a batre: ");
	scanf("%f", &record);

	//Comprovem que el valor no sigui negatiu
	if (record <= 0.0) {
		printf("Error, no es poden introduir dades negatives\n ");
	}else {
		//entrada variable marca
		printf("Introdueix la marca de l'atleta: ");
		scanf("%f", &marca);

		//Comprovem que el valor no sigui negatiu
		if (marca <= 0.0) {
			printf("Error, no es poden introduir dades negatives\n ");
		}else{
			//comprovació record
			if (marca < record){
				printf("Nou record\n");
			} else {
				printf("No s'ha batut el  record!\n");
			}
		}
	}
}
