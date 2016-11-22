/******************************************
*										  *
*   Autors: Sergi Valero i Adria Arroyo	  *
*   Pracica 1 exercici 2				  *
*										  *
******************************************/

//Llibreries del sistema
#include <stdio.h>
#include <conio.h>

//Introducció de variables
float marca, suma, mitjana, record, record_nou=1000;
int nombre_atletes, x=1,comptador=0, y;

void main () {
	printf("Benvingut\n");
	
	//Demanar rècord fins que record > 0
	do { 
		printf("Introdueixi el rècord a batre: \n");
		scanf("%f", &record);
		
		//Verifiquem que el record no sigui negatiu.
		if (record <= 0){
			printf("Error, no introduir dades negatives!\n");
		}
	} while(record < 0);
	
	//Demanar nombre d'atletes fins que nombre_altetes > 1
	do {
		printf("Introdueixi el nombre d'atletes de la prova:\n");
		scanf("%d", &nombre_atletes);
		
		//Verificar errors
		if (nombre_atletes < 1) {
			printf("Error, com a mínim ha de participar 1 atleta.\n");
		}
	} while (nombre_atletes < 1);
	
	//Introduir marca dels diferents atletes
	printf("Introdueixi les marques: \n");

	do {
		printf("\tAtleta %d: ", x);
		scanf("%f", &marca);

		if (marca <= 0) {
			printf ("Error, no introduir dades negatives!");
		}else{
			//Assignació del nou record
			record_nou = record;
			if (marca < record){
					record_nou = marca;
					y = x;
			}
			suma = suma + marca;
			comptador++;
			x++;
		}
	} while (nombre_atletes != comptador);
	
	//Calcul de la mitjana de les marques introduides
	mitjana = suma/nombre_atletes;
	printf("La mitjana de les marques és: %.2f\n", mitjana);
	
	//Verificar si hi ha nou rècord
	if (record_nou < record){
		printf("L'atleta número %d ha batut el record!\n", y);
		} else {
			printf("Cap atleta ha batut el record\n");
		}
}
