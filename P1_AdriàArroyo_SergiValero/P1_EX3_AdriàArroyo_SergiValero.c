/******************************************
*																					*
*		Autors: Sergi Valero i Adria Arroyo		*
*		Practica 1 exercici 1									*
*																					*
******************************************/

//Llibreries del sistema
#include <conio.h>
#include <stdio.h>

//Introduccio de variables
int opcio, comptador, resultat, marca, num1, num2;
char lletra, aux;

void main () {
	printf("Benvingut \n");
	printf("-----------------------\n");
	do {
	//Menu d'opcions
	printf("Esculli l'opcio que desitgi: \n");
	printf("-----------------------\n");
	printf("1.- Codificar marca\n");
	printf("2.- Descodificar marca\n");
	printf("3.- Sortir\n");
	printf("-----------------------\n");
	printf("Opcio: \n");
	scanf("%d", &opcio);

	//Inicialitzo la variable comptador a 0
	comptador = 0;

	//Switch que executa els diferents comandaments segons la opció seleccionada
	switch (opcio) {
			case 1:
					printf("\n");
					//Introducció variable marca
					printf("Introdueix la marca: \n");
					scanf("%d", &marca);

					//Comprovo que el nombre introduit estigui entre 1 i 702
					if (marca < 1 || marca > 702){
							printf("Error, les marques han d'estar entre 1 i 702.\n");
							printf("\n");
					}else{
							//Quan la marca sigui mes gran a 26, el bucle restara 26 unitats a la marca i a la vegada incrementara el valor del comptador
							while (marca > 26){
								marca = marca-26;
								comptador++;
							}

							printf("La codificacio s'ha completat correctament!\n" );
							printf("El codi que correspon a la marca introduida es: ");
							//Si la marca era mes gran a 26, el comptador sera diferent de 0 i per tant haura de escriure una segona lletra
							if (comptador > 0){
								aux = '`' + comptador;
								printf("%c", aux);
							}
							//Quan la marca es mes petita a 26, li asigna el valor de la lletra de a-z
							if (marca <= 26){
								lletra = '`' + marca;
								printf("%c\n", lletra);
								printf("\n");
							}
					}
				break;
			case 2:
					printf("\n");
					//Introducció de dades
					printf("Introdueix la primera lletra: \n");
					fflushnou();
					scanf("%c", &aux);

					//En cas de introduir una lletra majuscula, la transformo en minuscula
					if ('A' < aux && aux < 'Z') {
						aux = aux + 32;
					}
					printf("Introdueix la segona lletra: \n");
					fflushnou();
					scanf("%c", &lletra);

					//En cas de introduir una lletra majuscula, la transformo en minuscula
					if ('A' < aux && aux < 'Z') {
						aux = aux + 32;
					}
						//If que comprova si hi ha una o dos lletres
					if (lletra == '-'){
						resultat = aux - '`';
					}else{
							//Si han introduit 2 lletres, es calcula el seu valor i es sumen .
							if (lletra >= 'a' && lletra <= 'z'){
								comptador = aux - '`';
								num1 = comptador*26;
								num2 = lletra - '`';
								resultat = num1 + num2;
							}
					}
					printf("La descodificacio s'ha completat correctament!\n");
					printf("La marca es: %d\n", resultat);
					printf("\n");
				break;
			case 3:
					printf("\n");
					//Sortida del programa
					printf("Adeu!!!\n");
				break;
			default: printf("Opcio no valida\n");
		}
	}while (opcio != 3);
}
