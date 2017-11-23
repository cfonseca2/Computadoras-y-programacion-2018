#include<stdio.h>
#include<string.h>
#include "cabecera.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char *argv[]) {
	appInfoData("Archivos", "22/11/2017");

int dato;
FILE *ptrArchivo;
ptrArchivo=fopen("datos.dat","wb");

if(ptrArchivo==NULL){
	printf("Error al abrir el archivo\n");
	}else{
		
		printf("Dame el dato a guardar al archivo:");
		scanf("%d", &dato);
		
		fprintf(ptrArchivo,"%d\n",dato);
		fprintf(ptrArchivo,"%d\n",++dato);
		fprintf(ptrArchivo,"%d\n",++dato);
		
		fclose(ptrArchivo);
	}
	return 0;
}
