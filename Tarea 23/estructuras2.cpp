#include<stdio.h>
#include<string.h>
#include "cabecera.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct alumnos{
	int edad;
	char nombre[60];
	char genero;
	char carrera[25];
	char nCuenta[10];
};

typedef struct alumnos ALUMNO;

int main (int argc, char *argv[]){
	appInfoData("Estructura alumnos", "20/11/2017");
	ALUMNO var1;
	
	printf("Introduce la edad: ");
	scanf("%d",&var1.edad);
	
	printf("Introduce el nombre: ");
	fflush(stdin);
	gets(var1.nombre);
	
	printf("Edad:%d nombre:%s",var1.edad,var1.nombre);
	
	return 0;
}
