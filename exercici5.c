#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct  {
	char nom[50];
	float marca;
	char prova;
} Persona;
//Indiquem que volem un array de persones d'una distancia de 10(el 0 no ens interesa)
Persona atletes[11];

int uncop = 0;//boolea per saludar nomes 1 cop 
char info[1000];//Cadena de caracters per interpretar la nova info
int num_atletes = 0;// Numero d'atletes guardats

int menuInicial() {
	int opcio;
	printf("\t1- Introducir datos\n");
	printf("\t2- Consultar marcas\n");
	printf("\t3- Ver estadisticas\n");
	printf("\t4- Salir\n");
	printf("Opcion: ");
	scanf("%d", &opcio);
	return opcio;
}

//Funcio per ordenar els diferents errors dels sistema
void Error(int tipo_error) {

	switch (tipo_error)
	{
		case 0:
			printf("Error, opcion incorrecta\n\n");
		break;
		case 1:
			printf("Error, informacion NO introducida, el limite de atletas es 10\n\n");
		break;
		case 2:
			printf("Error, no se han introducido atletas en el sistema\n\n");
		break;
	}
}

//Funcio per dir "Benvenido" nomes un cop
void salutacioInical() {
	
	if (uncop == 0){
	printf("\tBenvenido\n");
	uncop++;
	}
}


//Part 1: Introduir dades
	//Aquesta funcio retorna el nombre d'aletes de la cadena
int cantidadNuevaInfo() {
	int index = 0;
	
	while (info[index] != '$') {
		index++;
	}

	if (index >= 2) {
		if (info[1] == '0') {
			//return numero atletes igual a 10
			return 10;
		}
		else {
			//return un indicador que fa referència a que hi han mes de 10 persones
			return 11;
		}
	}
	else {
		//return numero atletes menos que 10
		return info[0] - '0';
	}
}

//Aquesta funcio ens revisa si la informacio entrada es correcte respecte a las dates
int tiempoCorrecto() {
	int index = 0;
	int total = 0;
	int personas;
	int OK = 0;
	int persona_fora_temps=0;
	//Saltem el nombre de atletes
		while (info[index] != '$') {
			index++;
		}
		//per cada atleta fes aixo:
		for (personas = 1; personas <= cantidadNuevaInfo(); personas++)	{
			//Anem a buscar la data
			while (info[index] != '-') {
				index++;
			}

			//Estem a sobre de la - abans de la data
			index++;
			total = 0;
			//fem un atoi del dia
			while (info[index] != '/')
			{
				total = total * 10;
				total = total + info[index] - '0';
				index++;
			}
			int dia = total;
			index++;
			total = 0;
			//fem un atoi del mes
			while (info[index] != '/'){
				total = total * 10;
				total = total + info[index] - '0';
				index++;
			}

			int mes = total;

			index++;
			total = 0;
			//fem un atoi del any
			while (info[index] != '-')
			{
				total = total * 10;
				total = total + info[index] - '0';
				index++;
			}

			int any = total;

			if (personas != cantidadNuevaInfo()) {
				while (info[index] != '$') {
					index++;
				}
		}

		//Comprovem que dia,mes,any estan be !
		if (any % 4 == 0) {
			// anyo bisiesto
			// vigilem amb :febrer 29
			switch (mes)
			{
			case 1:
				if (dia >= 1 && dia <= 31) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 2:
				if (dia >= 1 && dia <= 29) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;

			case 3:
				if (dia >= 1 && dia <= 31) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 4:
				if (dia >= 1 && dia <= 30) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 5:
				if (dia >= 1 && dia <= 31) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 6:
				if (dia >= 1 && dia <= 30) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 7:
				if (dia >= 1 && dia <= 31) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 8:
				if (dia >= 1 && dia <= 31) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 9:
				if (dia >= 1 && dia <= 30) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 10:
				if (dia >= 1 && dia <= 31) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 11:
				if (dia >= 1 && dia <= 30) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 12:
				if (dia >= 1 && dia <= 31) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			
			default:
				OK = 0;
				break;
			}
		}
		// anyo NO bisiesto
		// vigilem amb :febrer 28
		else {
			switch (mes)
			{
			case 1:
				if (dia >= 1 && dia <= 31) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 2:
				if (dia >= 1 && dia <= 28) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;

			case 3:
				if (dia >= 1 && dia <= 31) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 4:
				if (dia >= 1 && dia <= 30) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 5:
				if (dia >= 1 && dia <= 31) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 6:
				if (dia >= 1 && dia <= 30) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 7:
				if (dia >= 1 && dia <= 31) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 8:
				if (dia >= 1 && dia <= 31) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 9:
				if (dia >= 1 && dia <= 30) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 10:
				if (dia >= 1 && dia <= 31) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 11:
				if (dia >= 1 && dia <= 30) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;
			case 12:
				if (dia >= 1 && dia <= 31) {
					OK = 1;
				}
				else {
					OK = 0;
				}
				break;

			default:
				OK = 0;
				break;
			}
		}

		//Si dia,mes,any son incorrectes, retorna la persona que te lerror.
		if (OK == 0) {
			persona_fora_temps = personas;
			return persona_fora_temps;
		}
		
	}
	//Si dia,mes,any son correctes, retorna 0
	return 0;
}

//Aquesta funcio Processa els nous atletes
//Entrem a la funcio la quantitat de noves persones que volem amb "cantidadpersonas".
void procesaNuevasPersonas(int cantidadpersonas) {
	
	int in_time;
	int personas=0;
	int index = 0;
	int index_registre = 0;
	int hiha_punt = 0;
	int distancia_punt_marca = 0;
	float total = 0;
	float decimal = 0;
	int contador_decimal = 0;
	
	//Si no ens passem de 10 atletes, endevant
	if ((cantidadpersonas + num_atletes) <= 10) {
		//pocessem les persones noves,revisem la data, si esta incorrecte, NO PROCESSEM RES!
		in_time = tiempoCorrecto();

		if (in_time != 0) {
			printf("Error, fecha incorrecta en el atleta %d.\n", in_time);
		}
		else {
			while (info[index] != '$') {
				index++;
			}
			index++;
			//Agafem el nom de latleta
			for (personas  = num_atletes + 1; personas  <= num_atletes + cantidadpersonas; personas++) {
				index_registre = 0;
				while (info[index] != '-') {
					atletes[personas].nom[index_registre] = info[index];
					index_registre++;
					index++;
				}
				//estem assobre del  - abans de la data
				index++;
				while (info[index] != '-') {
					index++;
				}
				index++;
				//estem assobre el primer numero de la marca

				distancia_punt_marca = 0;
				hiha_punt = 0;
				//Mirem si la marca te un punt
				while (info[index] != '-') {
					if (info[index] == '.') {
						hiha_punt = 1;
					}
					index++;
					distancia_punt_marca++;

				}
				
				//Si tenim decimals, ho processem daquesta manera.
						//Basicament fem 2 atois un abas del punt i laltre despres.
				if (hiha_punt > 0) {
					
					index = index - distancia_punt_marca;
					total = 0;
					while (info[index] != '.')
					{
						total = total * 10;
						total = total + info[index] - '0';
						index++;
					}
					index++;
					contador_decimal = 0;
					decimal = 0;
					while (info[index] != '-')
					{
						decimal = decimal * 10;
						decimal = decimal + info[index] - '0';
						index++;
						contador_decimal++;
					}
					//en cas de tenir 1 decimal, fes la suma amb 1 decimal
					if (contador_decimal == 1) {
						total = total + decimal / 10;

					}
					//sino fes la suma amb 2 decimals
					else if(contador_decimal == 2){
						total = total + decimal / 100;
					}

					atletes[personas].marca = total;
					

				}
				//Sino,fem un atoi normal.
				else {

					total = 0;
					index = index - distancia_punt_marca;
					
					while (info[index] != '-')
					{
						total = total * 10;
						total = total + info[index] - '0';
						index++;
					}
					atletes[personas].marca = total;
				}

				index++;
				atletes[personas].prova = info[index];
				index = index + 2;				
			}
		
			printf("Informacion introducida con exito!\n\n");
			//Augmentem el nombre datletes total
			num_atletes = num_atletes + cantidadpersonas;
		}
	}
	else {
		//imprimim per pantalla el error 1
		Error(1);
	}
}

//Funcio que ens gestiona el resultat de "cantidadNuevaInfo()"
void contadorNuevasPersonas() {

	switch (cantidadNuevaInfo())
	{
	case 10:
		procesaNuevasPersonas(10);
		break;
	case 11:
		Error(1);
		break;
	default:
		procesaNuevasPersonas(cantidadNuevaInfo());
	}
}

//Funcio que llegeix el text introduit
void introducirInfo() {
	printf("Atletas:");
	fflushnou();
	gets(info);
	contadorNuevasPersonas();
}



//Part 2: Consultar Marques
void verMarcas() {

	int j;
	//revisem si s'han ficat atletes
	if (num_atletes > 0 ) {

		printf("Prueba A:\n");
		//Per cada atleta imprimim en pantalla el seu nom - marca
		for (j = 1; j <= num_atletes; j++) {
			if (atletes[j].prova == 'A') {
				printf("\t%s - %.2f\n", atletes[j].nom, atletes[j].marca);
			}
		}
		printf("Prueba B:\n");
		for (j = 1; j <= num_atletes; j++) {
			if (atletes[j].prova == 'B') {
				printf("\t%s - %.2f\n", atletes[j].nom, atletes[j].marca);
			}
		}
		printf("Prueba C:\n");
		for (j = 1; j <= num_atletes; j++) {
			if (atletes[j].prova == 'C') {
				printf("\t%s - %.2f\n", atletes[j].nom, atletes[j].marca);
			}
		}
	}
	else {
		//Tenim 0 atletes? Error 2!
		Error(2);
	}
}

//Part 3: Veure estadístiques
void verEstadisticas() {

	int j;

	float mitjana_a = 0.0;
	float mitjana_b = 0.0;
	float mitjana_c = 0.0;

	float max_a;
	float max_b;
	float max_c;

	float min_a;
	float min_b;
	float min_c;

	int contador_a = 0;
	int contador_b = 0;
	int contador_c = 0;

	if (num_atletes > 0) {
		//Si trobem un atleta, augmentem el marcador de la prova corresponent a la persona.
		//Agafem a l'ultim atleta de cada Prova i li asignem la millor i la pitjor marca. 
		for (j = 1; j <= num_atletes; j++) {
			if (atletes[j].prova == 'A') {
				contador_a++;
				max_a = atletes[j].marca;
				min_a = atletes[j].marca;
			}else if (atletes[j].prova == 'B') {
				contador_b++;
				max_b = atletes[j].marca;
				min_b = atletes[j].marca;
			}else if (atletes[j].prova == 'C') {
				contador_c++;
				max_c = atletes[j].marca;
				min_c = atletes[j].marca;
			}
		}
			//Anem a buscar algun atleta que superi aquesta marca	Max i min establerta anteriorment
		for (j = 1; j <= num_atletes; j++) {
			if (atletes[j].prova == 'A') {

				if (atletes[j].marca > max_a) {
					max_a = atletes[j].marca;
				}
				if (atletes[j].marca < min_a) {
					min_a = atletes[j].marca;
				}
			}
			else if (atletes[j].prova == 'B') {

				if (atletes[j].marca > max_b) {
					max_b = atletes[j].marca;
				}
				if (atletes[j].marca < min_b) {
					min_b = atletes[j].marca;
				}
				
			}
			else if (atletes[j].prova == 'C') {
				
				if (atletes[j].marca > max_c) {
					max_c = atletes[j].marca;
				}
				if (atletes[j].marca < min_c) {
					min_c = atletes[j].marca;
				}
			}
		}
		//Fem el sumatori de la Mitjana arimètica.
		for (j = 1; j <= num_atletes; j++) {
			if (atletes[j].prova == 'A') {
				mitjana_a = mitjana_a + atletes[j].marca;
			}
			if (atletes[j].prova == 'B') {
				mitjana_b = mitjana_b + atletes[j].marca;
			}
			if (atletes[j].prova == 'C') {
				mitjana_c = mitjana_c + atletes[j].marca;
			}
		}

		//Imprimim els resultats: 
		printf("Prueba A:\n");
		if (contador_a != 0) {
			printf("\tMejor: %.2f\n",min_a);
			printf("\tPeor: %.2f\n",max_a);
			printf("\tMedia: %.2f\n",(mitjana_a/contador_a));
		}
		else {
			printf("\tMejor: ---\n");
			printf("\tPeor: ---\n");
			printf("\tMedia: ---\n");
		}
		printf("Prueba B:\n");
		if (contador_b != 0) {
			printf("\tMejor: %.2f\n",min_b);
			printf("\tPeor: %.2f\n",max_b);
			printf("\tMedia: %.2f\n", (mitjana_b / contador_b));
		}
		else {
			printf("\tMejor: ---\n");
			printf("\tPeor: ---\n");
			printf("\tMedia: ---\n");
		}
		printf("Prueba C:\n");
		if (contador_c != 0) {
			printf("\tMejor: %.2f\n",min_c);
			printf("\tPeor: %.2f\n",max_c);
			printf("\tMedia: %.2f\n", (mitjana_c / contador_c));
		}
		else {
			printf("\tMejor: ---\n");
			printf("\tPeor: ---\n");
			printf("\tMedia: ---\n");
		}
	}
	else {
		//No hi han atletes? Error de tipus 2 !
		Error(2);
	}
}


void main() {

	int run = 1;//boolea per sortir del bucle inicial.
	
	while (run > 0) {

		salutacioInical();
		//switch per gestionar l'interacció amb l'usuari.
		switch (menuInicial()) {
		case 1:
			introducirInfo();
			break;
		case 2:
			verMarcas();
			break;
		case 3:
			verEstadisticas();
			break;
		case 4:
			//Part 4 Sortir
			printf("Adios, gracias por utilizar nuestros servicios.\n");
			run = 0;
			break;
		default:
			//No es una de les opcions anteriors? Error de tipus 0 !
			Error(0);	
		}
	}
}