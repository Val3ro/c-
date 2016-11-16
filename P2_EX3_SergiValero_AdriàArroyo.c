#include <stdio.h>
#include <conio.h>

int opcio, comptador, resultat, marca, num1, num2;
char lletra, aux;


void main () {

	printf("Benvingut \n");
	printf("-----------------------\n");
	printf("Esculli l'opció que desitgi: \n");
	printf("-----------------------\n");
	printf("1.- Codificar marca\n");
	printf("2.- Descodificar marca\n");
	printf("3.- Sortir\n");
	printf("-----------------------\n");
	printf("Opció: ");
	scanf("%d", &opcio);
comptador = 0;
	switch (opcio) {
		case 1:
				printf("Marca: ");
				scanf("%d", &marca);

				if (marca<1 || marca>702){
						printf("Error, les marques han d'estar entre 1 i 702.\n");
				}else{
						while (marca>26){
							marca = marca-26;
							comptador++;
						}
						if (comptador > 0){
							aux = '`' + comptador;
							printf("%c", aux);
						}
						if (marca <= 26){
							lletra = '`' + marca;
							printf("%c\n", lletra);
						}
				}
			break;

		case 2:

				printf("Primera lletra: ");
				fflush(stdin);
				scanf("%c", &aux);

				printf("Segona lletra: ");
				fflush(stdin);
				scanf("%c", &lletra);

					if (lletra == '-'){
						resultat = aux - '`';
					}else{
						if (lletra>='a' && lletra<='z'){
							comptador = aux - '`';
							num1 = comptador*26;
							num2 = lletra - '`';
							resultat = num1 + num2;
						}
					}

				printf("%d", resultat);

		break;

		case 3: printf("Adeu!!!\n");
			break;

		default: printf("Opció no valida\n");
	}
}
