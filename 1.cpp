#include<stdio.h>
void convertirEnBinaire(int nombre){
	int binaire[32];
	int i=0;
	while(nombre > 0){
		binaire[i]=nombre % 2;
		nombre /= 2;
		i++;
	}
	printf("binaire:");
	for (int j = i - 1; j >= 0; j--){
		printf("%d",binaire[j]);
	}
	printf("\n");
}

void convertirEnOctal(int nombre){
		int octal[32];
	int i=0;
	while(nombre > 0){
		octal[i]=nombre % 8;
		nombre /= 8;
		i++;
	}
	printf("octal:");
	for (int j = i - 1; j >= 0; j--){
		printf("%d",octal[j]);
	}
	printf("\n");
}

void convertirEnHexadicimal(int nombre){
		char Hexadicimal[32];
	int i=0;
	while(nombre > 0){
		int reste = nombre % 16;
		if (reste < 10){
			Hexadicimal[i] = reste + '0';}
		
		else {
			Hexadicimal[i] = reste - 10 + 'A';
		}
		nombre /= 16;
		i++;
	}
	printf("Hexadicimal:");
	for (int j = i - 1; j >= 0; j--){
		printf("c",Hexadicimal[j]);
	}
	printf("\n");
}
int main(){
	int nombre;
	printf("entrez un nombre entier :");
	scanf("%d", &nombre);
	convertirEnBinaire(nombre);
	convertirEnOctal(nombre);
	convertirEnHexadicimal(nombre);
}
