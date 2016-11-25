#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct  {
	char nomat[50];
	char dataat[10];
	float marcaat[5];
	char tipus[2];
} Dades;

char cadena[1000];
int opcio=0, i=0, j=0, num_atletes, k=0, l=0, m=0, n=0,stop=0;



void main() {
	Dades dades[10];
	if (stop == 0) {
		printf("Benvingut\n");
		printf("\t\t1- Introduir dades\n");
		printf("\t\t2- Consultar marques\n");
		printf("\t\t3- Veure estadistiques\n");
		printf("\t\t4- Sortir\n");
		printf("\tOpcio: ");
		scanf("%d", &opcio);
		
			if(opcio >= 1 && opcio <= 3){
				stop = 0;
			}else{
				stop = 1;
			}
				
				
		switch (opcio){
				case 1:
						printf("Atletes: ");
						fflush(stdin);
						fgets(cadena,1000,stdin);

						printf("Informacio introduida amb exit!\n");

						//3$Francisco Araujo-12/03/2016-22.54-A$Arseny Belyakov-12/03/2016-25.03-A$Mike Smith-12/03/2016-12.45-B

						//if (cadena[1] == '$') {
							num_atletes = cadena[0] - '0';
						/*}else {
								if (cadena[1] == '0') {
									num_atletes = 10;
								}
								if (cadena[1] != '0' && cadena[1] != '$'){
									printf("Error, el màxim de atletes que es poden introduir son 10.\n");
								}
							}
						*/

						for (n=0;n<num_atletes+1;n++){
							while (i != 1000) {
								while (cadena[i] == '$'){
									i++;
								}
								while(cadena[i] != '-') {
									dades[n].nomat[j] = cadena[i];
									i++;
									j++;
								}
								i++;
								while (cadena[i] != '-') {
									dades[n].dataat[k] = cadena[i];
									i++;
									k++;
								}
								i++;
								while (cadena[i] != '-') {
									dades[n].marcaat[l] = cadena[i];
									i++;
									l++;
								}
								i++;
								while (cadena[i] != '$') {
									dades[n].tipus[m] = cadena[i];
									i++;
									m++;
								}
							}
						}
			break;
		case 2:
						printf("Prova A:\n");
						for (n=0;n<num_atletes+1;n++){
							if (dades[n].tipus[0] == 'A') {
								printf("\t%s - %s\n", dades[n].nomat, dades[n].marcaat);
							}
						}
						printf("Prova B:\n");
						for (n=0;n<num_atletes+1;n++){
							if (dades[n].tipus[0] == 'B') {
								printf("\t%s - %s\n", dades[n].nomat, dades[n].marcaat);
							}
						}
						printf("Prova C:\n");
						for (n=0;n<num_atletes+1;n++){
							if (dades[n].tipus[0] == 'C') {
								printf("\t%s - %s\n", dades[n].nomat, dades[n].marcaat);
							}
						}
						printf("Prova D:\n");
						for (n=0;n<num_atletes+1;n++){
							if (dades[n].tipus[0] == 'D') {
								printf("\t%s - %s\n", dades[n].nomat, dades[n].marcaat);
							}
						}
			break;
		case 3:
			break;
		case 4:
						printf("Adeuu!!!\n");
				stop = 2;
			break;
		default:printf("La opcio introduida no es valida\n");

		}
	}
}
