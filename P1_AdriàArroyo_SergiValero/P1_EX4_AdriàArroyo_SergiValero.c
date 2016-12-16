#include<stdio.h>
#include<math.h>


void main(){

	float record,marca,pitjor_record,millor_record,resultat=0.0,n=1;
	int atletes,x,y,millor_atleta,pitjor_atleta,record_batut=0;//record_batut actua com un boolea en aquest codi

	printf("Benvingut\n");

	do{
		printf("Introdueixi el record a batre: ");
		scanf("%f",&record);
	 pitjor_record = record;
	 millor_record = record;

	//Controlem que no introdueixi numeros negatius
		if(record < 0){
			printf("Error, no es poden introduir dades negatives.\n");
		}

	}while(record < 0);

	do{
		printf("Introdueixi el nombre d'atletes de la prova: ");
		scanf("%d",&atletes);

		//Controlem que no introdueixi numeros negatius
		if(atletes <= 0){
			printf("Error, com a minim ha de participar 1 atleta.\n");
		}

	}while(atletes <= 0);

	printf("Introdueixi les marques:\n");
		//Preguntem la informacio per a cada atleta
	for(x=1;x<=atletes;x++){

		do{
			printf("Atleta %d: ",x);
			scanf("%f",&marca);
			//Controlem que no introdueixi numeros negatius
			if(marca <=0){
				printf("No s'admeten numeros negatius. Torni a introduir el numero ");
			}

		}while(marca<0);
		//Omplim les variables nomes amb la marca del primer atleta
		if(x == 1){
			millor_record = marca;
			pitjor_record = marca;
		}
		//Actualizant la millor marca si superem el record
		if(marca < record){
			millor_atleta = x;
			record = marca;
			record_batut = 1;
		}
		if(marca < millor_record){
			millor_atleta = x;
			millor_record = marca;
		}
		//Actualitzant la pitjor marca si estem per sota la pitjor marca
		if(marca >= pitjor_record){
			pitjor_record = marca;
			pitjor_atleta = x;
		}
			//Calculem la formula
			resultat = resultat + marca * sqrt(record);
	}
		if(record_batut){

			printf("L'atleta numero %d ha batut el record!\n",millor_atleta);
		}else{

			printf("Cap atleta ha batut el record\n");
		}

		printf("Atleta amb millor marca: Atleta %d\n",millor_atleta);
		printf("Atleta amb pitjor marca: Atleta %d\n",pitjor_atleta);

		for(y = atletes;y>=1;y--){
		n = n * y;
		}
		printf("Resultat: %.2f\n",resultat/n);
}
